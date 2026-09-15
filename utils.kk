module utils

// like monadic bind
pub fun maybe/flatmap(m : maybe<a>, f : a -> e maybe<b>) : e maybe<b>
  match m
    Nothing -> Nothing
    Just(x) -> f(x)

// like unjust but for either
pub fun either/unright(ei, ?kk-file-line) match ei
  Right(x) -> x
  Left(_) -> throw("unexpected Left in " ++ ?kk-file-line)

// repeatedly apply and endofunction until fixpoint
fun fixpoint(current : a, f : a -> <div|e> a, ?(==) : (a, a) -> bool) : <div|e> a
  val next = f(current)
  if next == current then next
  else fixpoint(next, f)

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
    Cons('\\', rest) -> Cons('\\', Cons('\\', rest.escape))
    Cons(c, cs) -> Cons(c, cs.escape)
    Nil -> Nil

// unescape escape sequences from the string, so \n becomes real newline
pub fun string/unescape(str : string)
  str.list.unescape.string

// escape escape-sequences from string, so real newline becomes \n
pub fun string/escape(str : string)
  str.list.escape.string
