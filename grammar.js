tokens = {
    status_todo: _ => '+',
    status_doing: _ => '*',
    status_done: _ => '-',
    status_cancel: _ => '=',
    status_other: _ => '/',

    tag: _ => /@[a-zA-Z0-9][a-zA-Z0-9_-]*/,
    date_value: _ => /\d{4}-\d{2}-\d{2}/,
    key: _ => /[a-zA-Z][a-zA-Z0-9_-]*/,
    value: _ => /[^#\(\)\[\]\{\}\t\r\n]*/,
    priority_inner: _ => /[A-Z]/,

    category_name: _ => /[^#\[\]\t\r\n]+/,
    memo: _ => token(seq('#', /.*/)),
    whitespace: _ => /(\s|\\\r?\n)+/,

    _text_start_ptn: _ => /[^# +*-/=@({\[\t\n][^#@\n]*/,
    _text_subsequent_ptn: _ => /[^#@\n]+/,
}

module.exports = grammar({
    name: 'todome',

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
    ],

    extras: $ => [
        $.whitespace,
    ],

    conflicts: $ => [
        [$._task_line, $._header_line],
    ],

    supertypes: $ => [
        $._meta,
    ],

    rules: {

        source_file: $ => repeat(choice($.task, $.header, $._memo_line)),

        task: $ => seq($._task_line, choice(seq($._indent, field('children', $.block)), $._newline)),

        header: $ => seq($._header_line, choice(seq($._indent, field('children', $.block)), $._newline)),

        block: $ => seq(
            repeat(choice($.task, $.header, $._memo_line)),
            $._dedent
        ),

        _task_line: $ => seq(
            optional(field('status', $.status)),
            repeat($._meta),
            field('text', $.text),
            optional($.memo),
    ),
        _header_line: $ => choice(
            seq(
                optional(field('status', $.status)),
                repeat1($._meta),
                optional($.memo),
            ),
            seq(
                field('status', $.status),
                optional($.memo),
            ),
        ),

        _memo_line: $ => seq($.memo, $._newline),

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
            $.status_other,
        ),

        priority: $ => seq('(', field('value', $.priority_inner), ')'),

        due: $ => seq('(', field('value', $.date_value), ')'),
        keyval: $ => seq('{', field('key', $.key), ":", field('value', $.value), '}'),

        category: $ => seq('[', $.category_name, ']'),

        text: $ => seq(
            choice($.tag, $._text_start),
            repeat(choice($.tag, $._text_subsequent))
        ),

        _text_start: $ => alias($._text_start_ptn, $.subtext),
        _text_subsequent: $ => alias($._text_subsequent_ptn, $.subtext),

        ...tokens
    }
})
