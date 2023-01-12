[ (memo) ] @string

((category) @keyword)

((priority) @namespace)

(date ["(" ")"] @punctuation.bracket)
(date start: (date_value) @property "~" @property)
(date target: (date_value) @constant)
(date deadline: (date_value) @constant @text.strong "!" @constant @text.strong)

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
  (task   priority: (priority) @type)
  (header priority: (priority) @type)
  ] @text.strong
 (#match? @type "\(A\)")
 )

(
 [
  (task   priority: (priority) @type)
  (header priority: (priority) @type)
  ]
 (#match? @type "\(B\)")
 )
