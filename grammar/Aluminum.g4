grammar Aluminum;

program: function+;

function: function_header block;

function_header: DEFINE FUNCTION (MAIN | IDENTIFIER) LPAREN RPAREN (ARROW type)?;

block: LCURL statement* RCURL;

statement
    : declare_op EOL
    | set_op EOL
    | expression EOL
    | if_block
    | while_block
    ;
if_block: IF LPAREN expression RPAREN block else_block?;
else_block: ELSE (if_block | block);
while_block: WHILE LPAREN expression RPAREN block;
declare_op: TAKE type IDENTIFIER (EQUALS expression)?;

set_op: SET IDENTIFIER EQUALS expression;

expression
    : value
    | LPAREN expression RPAREN
    | function_call
    | expression EQUALS EQUALS expression
    | expression MUL expression
    | expression DIV expression
    | expression ADD expression
    | expression SUB expression
    ;
function_call: IDENTIFIER LPAREN RPAREN;

value
    : literal_val
    | var_val
    ;
literal_val: INT_LITERAL;
var_val: IDENTIFIER;

type
    : default_type
    | custom_type
    ;
default_type: INT;
custom_type: 'cust';


// LEXER PART

// tokens
LPAREN: '(';
RPAREN: ')';
EOL: ';';
LCURL: '{';
RCURL: '}';
ARROW: '->';
DOR: '.';

EQUALS: '=';

// keywords
TAKE: 'take';
SET: 'set';
MAIN: 'main';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
DEFINE: 'def';
FUNCTION: 'func';
VARIABLE: 'var';
INT: 'int';



IDENTIFIER: [a-zA-Z_]+[0-9a-zA-Z_]*;

MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';

INT_LITERAL: '-'?[0-9]+;



WS: [ \r\t\n] -> skip;






