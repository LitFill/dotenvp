module main

import std/os/file
import std/os/path
import std/text/parse

/*
1. Lexer    done
2. Parser   done
3. Eval     done
4. AST      done
5. IO       half done
*/

// AST

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

pub fun document/to-env(d)
  with i <- d.items.flatmap
  match i
    Pair(name = n, value = v) -> [(n, v)]
    _ -> []

pub type item
  Pair(
    name : name,
    value : value,
    annotation : list<annotation> = [],
    inline-comment : string = ""
  )
  Line-comment(content : string)

pub fun item/value(i : item) match i
  Pair(value=v) -> Just(v)
  _ -> Nothing

pub fun maybe/flatmap(m : maybe<a>, f : a -> e maybe<b>) : e maybe<b>
  match m
    Nothing -> Nothing
    Just(x) -> f(x)

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

pub struct name(name : string)

pub fun name/make(s)
  Name(s || "xxx")

pub fun name/show(na__show : name)
  "Name(" ++ na__show.name.show ++ ")"

pub fun name/eq(na__eq_1 : name, na__eq_2 : name)
  na__eq_1.name == na__eq_2.name

pub fun name/(==)(x : name, y : name)
  name/eq(x, y)

pub type value
  Str(string : string)

pub fun value/show(va__show : value)
  match va__show
    Str(string) -> "Str(" ++ string.show ++ ")"

pub fun value/eq(va__eq_1 : value, va__eq_2 : value)
  match (va__eq_1, va__eq_2)
    (Str(va__eq_11), Str(va__eq_21)) ->
      va__eq_11 == va__eq_21

pub fun value/(==)(x : value, y : value)
  value/eq(x, y)

pub type annotation
  Export

pub fun annotation/show(an__show : annotation)
  match an__show
    Export -> "Export"

pub fun annotation/eq(an__eq_1 : annotation, an__eq_2 : annotation)
  match (an__eq_1, an__eq_2)
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
  doc.items.map fn (i) match i
    Pair(n, v, a, c) ->
      Pair(n, doc.eval(v), a, c)
    Line-comment(c) -> Line-comment(c)
  .Document

// Parsers

fun whitespace-char()
  [ { char(' ')  }
  , { char('\t') }
  , { char('\n') }
  , { char('\r') }
  ] .choose

fun whitespace-char'()
  " \t\n\r".list.map fn(c)
    fn() char(c)
  .choose

pub fun lex/ws()
  many(whitespace-char).ignore

// run `p` then run `lex/ws` after
pub fun lex/lexeme(p : () -> <parse|e> a) : <parse|e> a
  val res = p()
  lex/ws()
  res

pub fun lex/token(s :string)
  with lexeme
  pstring(s)

pub fun namep()
  with lexeme
  none-of-many1(" \n\r\t='\"").Name

pub fun valuep()
  [quoted-valuep, non-quoted-valuep].choose

fun non-quoted-valuep()
  none-of-many1(" \n\r").Str

fun quoted-valuep()
  quotedstringp().unescape.Str

pub fun quotedstringp()
  with between-char('"', '"')
  none-of-many1("\"")

pub fun between(p : parser<e, a>, l : parser<e, b>, r : parser<e, c>) : <parse|e> a
  l()
  val a = p()
  r()
  a

pub fun between-char(l, r, p)
  parse/char(l)
  val a = p()
  parse/char(r)
  a

pub fun annotationp()
  with lexeme
  token("export")
  Export

pub fun pairp()
  with lexeme
  val an =
    [].optional
      many
        annotationp()
  val nm = namep()
  token("=")
  val vl = valuep()
  val cm =
    "".optional
      commentp()
  Pair(nm, vl, an, cm)

fun commentp()
  with lexeme
  token("#")
  none-of-many1("\n\r")

pub fun linecommentp()
  commentp().Line-comment

pub fun itemp()
  [pairp, linecommentp].choose

pub fun documentp()
  many
    itemp()
  .Document

pub fun run(p, s)
  s.slice.parse(p).either

pub fun chars/unescape(str : list<char>)
  match str
    Cons('\\', Cons('n', rest)) ->
      Cons('\n', rest.unescape)
    Cons('\\', Cons('\\', rest)) ->
      Cons('\\', rest.unescape)
    Cons(c, cs) -> Cons(c, cs.unescape)
    Nil -> Nil

pub fun chars/escape(str : list<char>)
  match str
    Cons('\n', rest) -> Cons('\\', Cons('n', rest.escape))
    Cons(c, cs) -> Cons(c, cs.escape)
    Nil -> Nil

pub fun string/unescape(str : string)
  str.list.unescape.string

pub fun string/escape(str : string)
  str.list.escape.string

// IOs

pub fun either/unright(ei, ?kk-file-line) match ei
  Right(x) -> x
  Left(_) -> throw("unexpected Left in " ++ ?kk-file-line)

pub fun document/parse-file(fname)
  documentp.run(fname.read-text-file).unright

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

val example/corpus = r#"USER=admin
EMAIL=${USER}@email.com
CONTACT="User : ${USER}\nEMAIL : ${EMAIL}"
"#

fun main()
  "sample.env".path.parse-file
