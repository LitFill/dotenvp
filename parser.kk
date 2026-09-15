module parser

import std/text/parse

import ast
import utils

// Parsers

fun whitespace-char()
  [ { char(' ')  }
  , { char('\t') }
  , { char('\n') }
  , { char('\r') }
  ] .choose

// cooler whitespace-char
fun whitespace-char'()
  " \t\n\r".list.map fn(c)
    fn() char(c)
  .choose

// remove all white spaces
pub fun lex/ws()
  many(whitespace-char).ignore

// run `p` then run `lex/ws` after
pub fun lex/lexeme(p : () -> <parse|e> a) : <parse|e> a
  val res = p()
  lex/ws()
  res

// the tokenizer I think?
pub fun lex/token(s :string)
  with lexeme
  pstring(s)

pub fun namep()
  with lexeme
  none-of-many1(" \n\r\t='\"").name/make

pub fun valuep()
  [quoted-valuep, non-quoted-valuep].choose

fun non-quoted-valuep()
  none-of-many1(" \n\r").Str

// values that are in quotes with escape sequences unescaped
fun quoted-valuep()
  quotedstringp().unescape.Str

// TODO: handle other kind of quotations, eg. "x", """x""", 'x', '''x'''
pub fun quotedstringp()
  with between-char('"', '"')
  none-of-many1("\"")

// like bracket but for parsers
pub fun between(p : parser<e, a>, l : parser<e, b>, r : parser<e, c>) : <parse|e> a
  l()
  val a = p()
  r()
  a

// like between but for char opening and closing
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
  // BUG: it doesn't parse inline comment so the comment become line-wise comment
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

// run a parser, good for testing in repl
pub fun run(p, s)
  s.slice.parse(p).either

