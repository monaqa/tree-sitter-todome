[ (comment) ] @string

[
 (task status: (status (status_done)))
 (header status: (status (status_done)))
 (task status: (status (status_cancel)))
 (header status: (status (status_cancel)))
 ] @comment

[
 (task status: (status (status_todo)))
 (header status: (status (status_todo)))
 (task status: (status (status_doing)))
 (header status: (status (status_doing)))
 ] @none

((priority) @type)

((category) @title)

((due) @constant.builtin)

((keyval) @constant)

(
 (priority) @danger
 (#match? @danger "\(A\)")
 )

(
 (priority) @warning
 (#match? @warning "\(B\)")
 )

(
  (task
    meta:
    (meta
      priority: (priority) @danger
      )
    ) @text.strong
 (#match? @danger "\(A\)")
 )

(
  (task
    meta:
    (meta
      priority: (priority) @warning
      )
    ) @text.emphasis
 (#match? @warning "\(B\)")
 )


; (
;  (priority) @variable.builtin
;  (#match? @variable.builtin "\(B\)"))
