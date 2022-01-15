[ (memo) ] @string

((category) @keyword)

((priority) @namespace)

((due) @constant)

((keyval) @property)

((tag) @tag.attribute)

(task (status [(status_done) (status_cancel)]) ) @comment
(header (status [(status_done) (status_cancel)]) ) @comment

(task status: (status [(status_todo) (status_doing)])) @none
(header status: (status [(status_todo) (status_doing)])) @none
; (task (status [(status_todo) (status_doing)]) (text) @none )
; (header (status [(status_todo) (status_doing)]) children: (_) @none)

[
 (status_todo)
 (status_doing)
 (status_other)
 ] @punctuation.delimiter

(
 [
  (task   (meta priority: (priority) @type))
  (header (meta priority: (priority) @type))
  ] @text.strong
 (#match? @type "\(A\)")
 )

(
 [
  (task   (meta priority: (priority) @type))
  (header (meta priority: (priority) @type))
  ]
 (#match? @type "\(B\)")
 )
