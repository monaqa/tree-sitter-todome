module.exports = grammar({
    name: 'todome',

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
    ],

    extras: $ => [
        $.comment,
        /\s|\\\r?\n/,
    ],

    conflicts: $ => [
        [$._task_line, $._header_line],
    ],

    rules: {

        source_file: $ => repeat(choice($.task, $.header)),

        task: $ => seq($._task_line, choice(seq($._indent, field('children', $.block)), $._newline)),

        header: $ => seq($._header_line, choice(seq($._indent, field('children', $.block)), $._newline)),

        block: $ => seq(
            repeat(choice($.task, $.header)),
            $._dedent
        ),

        _task_line: $ => seq(optional(field('status', $.status)), optional(field('meta', $.meta)), field('text', $.text)),
        _header_line: $ => choice(
            seq(optional(field('status', $.status)), field('meta', $.meta)),
            field('status', $.status),
        ),

        meta: $ => repeat1($._meta),

        _meta: $ => choice(
            field('priority', $.priority),
            field('due', $.due),
            field('keyval', $.keyval),
            field('category', $.category),
        ),

        status: $ => choice(
            $.status_todo,
            $.status_doing,
            $.status_done,
            $.status_cancel,
        ),
        status_todo: _ => '+',
        status_doing: _ => '*',
        status_done: _ => '-',
        status_cancel: _ => '/',

        priority: _ => seq('(', /[A-Z]/, ')'),

        due: $ => seq('(', field('value', $.date_value), ')'),
        date_value: _ => /\d{4}-\d{2}-\d{2}/,
        keyval: $ => seq('{', field('key', $.key), ":", field('value', $.value), '}'),
        key: _ => /[a-zA-Z][a-zA-Z0-9_-]*/,
        value: _ => /[^#\(\)\[\]\{\}\t\r\n]*/,

        category: $ => seq('[', $.category_name, ']'),
        category_name: _ => /[^#\[\]\t\r\n]+/,

        // text: _ => /[^# +*-/({\[\t\n][^#\n]*/,
        text: $ => choice(
            seq($._text_start, repeat(choice($.tag, $._text_subsequent))),
            seq(repeat1($.tag), $._text_subsequent, repeat(choice($.tag, $._text_subsequent)))
        ),
        tag: _ => /@[a-zA-Z0-9][a-zA-Z0-9_-]*/,
        _text_start: _ => /[^# +*-/=@({\[\t\n][^#@\n]*/,
        _text_subsequent: _ => /[^#@\n]+/,

        comment: _ => token(seq('#', /.*/)),
    }
})
