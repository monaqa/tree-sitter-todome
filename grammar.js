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

        task: $ => seq($._task_line, choice(seq($._indent, $.block), $._newline)),

        header: $ => seq($._header_line, choice(seq($._indent, $.block), $._newline)),

        block: $ => seq(
            repeat(choice($.task, $.header)),
            $._dedent
        ),

        _task_line: $ => seq(optional(field('status', $.status)), repeat($._meta), field('text', $.text)),
        _header_line: $ => choice(
            seq(optional(field('status', $.status)), repeat1($._meta)),
            field('status', $.status),
        ),

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
        status_todo: $ => '+',
        status_doing: $ => '*',
        status_done: $ => '-',
        status_cancel: $ => '/',

        priority: $ => seq('(', /[A-Z]/, ')'),

        due: $ => seq('{', field('value', $.date_value), '}'),
        date_value: $ => /\d{4}-\d{2}-\d{2}/,
        keyval: $ => seq('{', field('key', $.key), ":", field('value', $.value), '}'),
        key: $ => /[a-zA-Z][a-zA-Z0-9_-]*/,
        value: $ => /[^#\(\)\[\]\{\}\t\r\n]*/,

        category: $ => seq('[', $.category_name, ']'),
        category_name: $ => /[^#\[\]\t\r\n]+/,

        text: $ => /[^# +*-/({\[\t\n][^#\n]*/,

        comment: $ => token(seq('#', /.*/)),
    }
})
