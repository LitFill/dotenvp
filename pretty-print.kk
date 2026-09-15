module pretty-print

import ast
import utils

pub fun document/pretty(doc : document)
  doc.items.map(_.pretty).join("\n")

pub fun item/pretty(it : item)
  match it
    Pair(nm, vl, an, cm) ->
      val annotation = an.if-empty-then-empty(_.pretty ++ " ")
      val comment = cm.if-empty-then-empty("\t# " ++_)
      annotation ++ nm.pretty ++ "=" ++ vl.pretty ++ comment

    Line-comment(cm) ->
      cm.if-empty-then-empty("# " ++_)

pub fun annotation/pretty(ann : annotation)
  match ann
    Export -> "export"

pub fun annotation/list/pretty(anns : list<annotation>)
  anns.map(_.pretty).join(" ")

pub fun name/pretty(nm : name)
  nm.name

pub fun value/pretty(vl : value)
  match vl
    Str(s) -> s.show
