module ast

// Whole document, one per file currently

pub struct document
  items : list<item> = []

pub fun document/show(do__show : document)
  "Document("
  ++ "items=" ++ do__show.items.show
  ++ ")"

pub fun document/eq(do__eq_1 : document, do__eq_2 : document)
  do__eq_1.items == do__eq_2.items

pub fun document/(==)(x : document, y : document)
  document/eq(x, y)

// document to assoc list, for evaluating name references
pub fun document/to-env(d)
  with i <- d.items.flatmap
  match i
    Pair(name = n, value = v) -> [(n, v)]
    _ -> []

// the types of item in the document
pub type item
  // pair of name and value, with optional annotations and comment after
  Pair(
    name : name,
    value : value,
    annotation : list<annotation> = [],
    inline-comment : string = ""
  )
  // line-wise comment
  Line-comment(content : string)

// extract value from Pair constructor
pub fun item/value(i : item) match i
  Pair(value=v) -> Just(v)
  _ -> Nothing

pub fun item/show(it__show : item)
  match it__show
    Pair(name, value, annotation, inline-comment) ->
      "Pair(name="           ++ name.show
      ++ ", value="          ++ value.show
      ++ ", annotation="     ++ annotation.show
      ++ ", inline-comment=" ++ inline-comment.show
      ++ ")"
    Line-comment(content) ->
      "Line-comment(content=" ++ content.show ++ ")"

pub fun item/eq(it__eq_1 : item, it__eq_2 : item)
  match (it__eq_1, it__eq_2)
    (Pair(it__eq_11, it__eq_12, it__eq_13, it__eq_14),
     Pair(it__eq_21, it__eq_22, it__eq_23, it__eq_24)) ->
      it__eq_11    == it__eq_21
      && it__eq_12 == it__eq_22
      && it__eq_13 == it__eq_23
      && it__eq_14 == it__eq_24
    (Line-comment(it__eq_11), Line-comment(it__eq_21)) ->
      it__eq_11    == it__eq_21
    _ -> False

pub fun item/(==)(x : item, y : item)
  item/eq(x, y)

// idk how useful I make this?
pub struct name(name : string)

pub fun name/make(s)
  Name(s || "xxx")

pub fun name/show(na__show : name)
  "Name(" ++ na__show.name.show ++ ")"

pub fun name/eq(na__eq_1 : name, na__eq_2 : name)
  na__eq_1.name == na__eq_2.name

pub fun name/(==)(x : name, y : name)
  name/eq(x, y)

// the types of value
pub type value
  Str(string : string) // currently every value is just some string

pub fun value/show(va__show : value)
  match va__show
    Str(string) -> "Str(" ++ string.show ++ ")"

pub fun value/eq(va__eq_1 : value, va__eq_2 : value)
  match (va__eq_1, va__eq_2)
    (Str(va__eq_11), Str(va__eq_21)) ->
      va__eq_11 == va__eq_21

pub fun value/(==)(x : value, y : value)
  value/eq(x, y)

// the type of annotation like export or smth
pub type annotation
  Export  // only export for now

pub fun annotation/show(an__show : annotation)
  match an__show
    Export -> "Export"

pub fun annotation/eq(an__eq_1 : annotation, an__eq_2 : annotation)
  match (an__eq_1, an__eq_2)
    (Export, Export) -> True

pub fun annotation/(==)(x : annotation, y : annotation)
  annotation/eq(x, y)

// pattern for interpolation, eg. "USER" -> "${USER}"
inline fun to-pattern(s)
  "${" ++ s ++ "}"

// evaluate the value by substituting the ${VAR}s in it if it exists in the document
pub fun eval(doc : document, value : value)
  val env = doc.to-env  // should I reverse here so later binding win? I think so
  var vl := value.string
  env.foreach fn((n, v))
    vl := vl.replace-all(n.name.to-pattern, v.string)
  Str(vl)

// interpret the document so all ${VAR}s are substituted if possible
pub fun document/interp(doc : document) : document
  doc.items.map fn (i) match i
    Pair(n, v, a, c) ->
      Pair(n, doc.eval(v), a, c)
    Line-comment(c) -> Line-comment(c)
  .Document

// ```sh
// USER=admin
// EMAIL=${USER}@email.com
// CONTACT="User : ${USER}\nEMAIL : ${EMAIL}"
// ```
val example/document =
  Document([
    Pair(name/make("USER"),    Str("admin"),                            [], ""),
    Pair(name/make("EMAIL"),   Str("${USER}@email.com"),                [], ""),
    Pair(name/make("CONTACT"), Str("User : ${USER}\nEMAIL : ${EMAIL}"), [], ""),
  ])

