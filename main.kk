module main

/*
1. Lexer
2. Parser
3. Eval
4. AST
*/

// AST
pub struct document
  items : list<item>

pub fun document/show(do__derived_show : document)
  "Document("
  ++ "items=" ++ do__derived_show.items.show
  ++ ")"

pub fun document/eq(do__derived_eq_1 : document, do__derived_eq_2 : document)
  do__derived_eq_1.items == do__derived_eq_2.items

pub fun document/(==)(x : document, y : document)
  document/eq(x, y)

pub fun document/to-env(d)
  with i <- d.items.flatmap
  match i
    Pair(name = n, value = v) -> [(n, v)]
    _ -> []

pub type item
  Pair(name : name, value : value, annotation : list<annotation>, inline-comment : string)
  Line-comment(content : string)

pub fun item/show(it__derived_show : item)
  match it__derived_show
    Pair(name, value, annotation, inline-comment) ->
      "Pair(name="           ++ name.show
      ++ ", value="          ++ value.show
      ++ ", annotation="     ++ annotation.show
      ++ ", inline-comment=" ++ inline-comment.show
      ++ ")"
    Line-comment(content) ->
      "Line-comment(content=" ++ content.show ++ ")"

pub fun item/eq(it__derived_eq_1 : item, it__derived_eq_2 : item)
  match (it__derived_eq_1, it__derived_eq_2)
    (Pair(it__derived_eq_11, it__derived_eq_12, it__derived_eq_13, it__derived_eq_14), Pair(it__derived_eq_21, it__derived_eq_22, it__derived_eq_23, it__derived_eq_24)) -> it__derived_eq_11 == it__derived_eq_21 && it__derived_eq_12 == it__derived_eq_22 && it__derived_eq_13 == it__derived_eq_23 && it__derived_eq_14 == it__derived_eq_24
    (Line-comment(it__derived_eq_11), Line-comment(it__derived_eq_21)) -> it__derived_eq_11 == it__derived_eq_21
    _ -> False

pub fun item/(==)(x : item, y : item)
  item/eq(x, y)

pub struct name(name : string)

pub fun name/make(s)
  Name(s || "xxx")

pub fun name/show(na__derived_show : name)
  "Name("
  ++ "name=" ++ na__derived_show.name.show
  ++ ")"

pub fun name/eq(na__derived_eq_1 : name, na__derived_eq_2 : name)
  na__derived_eq_1.name == na__derived_eq_2.name

pub fun name/(==)(x : name, y : name)
  name/eq(x, y)

pub type value
  Str(string : string)

pub fun value/show(va__derived_show : value)
  match va__derived_show
    Str(string) -> "Str(string=" ++ string.show ++ ")"

pub fun value/eq(va__derived_eq_1 : value, va__derived_eq_2 : value)
  match (va__derived_eq_1, va__derived_eq_2)
    (Str(va__derived_eq_11), Str(va__derived_eq_21)) -> va__derived_eq_11 == va__derived_eq_21

pub fun value/(==)(x : value, y : value)
  value/eq(x, y)

pub type annotation
  Export

pub fun annotation/show(an__derived_show : annotation)
  match an__derived_show
    Export -> "Export"

pub fun annotation/eq(an__derived_eq_1 : annotation, an__derived_eq_2 : annotation)
  match (an__derived_eq_1, an__derived_eq_2)
    (Export, Export) -> True

pub fun annotation/(==)(x : annotation, y : annotation)
  annotation/eq(x, y)

inline fun to-pattern(s) "${" ++ s ++ "}"

pub fun eval(doc : document, value : value)
  val env = doc.to-env
  var vl := value.string
  env.foreach fn((n, v))
    vl := vl.replace-all(n.name.to-pattern, v.string)
  Str(vl)

fun fixpoint(current : a, f : a -> <div|e> a, ?(==) : (a, a) -> bool) : <div|e> a
  val next = f(current)
  if next == current then next
  else fixpoint(next, f)

pub fun document/interp(doc : document) : document
  val res =
    with i <- doc.items.map
    match i
      Pair(n, v, a, c) ->
        Pair(n, doc.eval(v), a, c)
      Line-comment(c) -> Line-comment(c)
  Document(res)

// S3_BUCKET=YOURS3BUCKET
// SECRET_KEY=YOURSECRETKEYGOESHERE

val example/document =
  Document([
    Pair(name/make("USER"),    Str("admin"),                            [], ""),
    Pair(name/make("EMAIL"),   Str("${USER}@email.com"),                [], ""),
    Pair(name/make("CONTACT"), Str("User : ${USER}\nEMAIL : ${EMAIL}"), [], ""),
  ])

fun main()
  example/document.fixpoint(_.interp)
