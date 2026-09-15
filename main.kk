module main

import std/os/file
import std/os/path

import parser
import utils

/*
1. Lexer    done
2. Parser   done
3. Eval     done
4. AST      done
5. IO       done
6. CLI
*/

// IOs

// read the file and parse a document out of the content
pub fun document/parse-file(fname)
  documentp.run(fname.read-text-file).unright

val example/corpus = r#"USER=admin
EMAIL=${USER}@email.com
CONTACT="User : ${USER}\nEMAIL : ${EMAIL}"
"#

fun main()
  "sample.env".path.parse-file
