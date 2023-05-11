grammar Aluminum;

program: function+ EOF;

function: function_header block;

function_header: DEFINE FUNCTION function_identifier LPAREN function_variables? RPAREN (ARROW type)?;

function_identifier: MAIN | IDENTIFIER;

function_variables: type IDENTIFIER (COMMA type IDENTIFIER)*;

block: LCURL statement* RCURL;

statement
    : declare_op EOL
    | set_op EOL
    | return_op EOL
    | expression EOL
    | if_block
    | while_block
    ;
return_op: RETURN expression;
if_block: IF LPAREN expression RPAREN block else_block?;
else_block: ELSE (if_block | block);
while_block: WHILE LPAREN expression RPAREN block;
declare_op: TAKE type IDENTIFIER (EQUALS expression)?;

set_op: SET IDENTIFIER EQUALS expression;

expression
    : value
    | function_call
//    | expression arith_op expression
    | LPAREN expression RPAREN
    | expression (MUL | DIV) expression
    | expression (ADD | SUB) expression
    | expression comp_op expression
    ;
//arith_op
//    : (ADD | SUB)
//    | (MUL | DIV)
//    ;
comp_op: (NOT EQUALS) | EQUALS | GREATEREQUAL | LESSEQUAL | GREATER | LESS;
function_call: IDENTIFIER LPAREN passed_arguments? RPAREN;
passed_arguments: expression (COMMA expression)*;
value
    : literal_val
    | var_val
    ;
literal_val: INT_LITERAL | FLOAT_LITERAL | bool_literal;
bool_literal:  TRUE | FALSE;

var_val: IDENTIFIER;

type
    : default_type
    | custom_type
    ;
default_type: INT | FLOAT | BOOL;
custom_type: 'cust';


// LEXER PART
//EOF: 'DONE';

// tokens
LPAREN: '(';
RPAREN: ')';
EOL: ';';
LCURL: '{';
RCURL: '}';
ARROW: '->';
DOT: '.';
COMMA: ',';
GREATEREQUAL: '>=';
GREATER: '>';
LESSEQUAL: '<=';
LESS: '<';
NOT: '~';
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
FLOAT: 'float';
BOOL: 'bool';
TRUE: 'true';
FALSE: 'false';
RETURN: 'return';



IDENTIFIER: [a-zA-Z_]+[0-9a-zA-Z_]*;

MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';

INT_LITERAL: '-'?[0-9]+;
FLOAT_LITERAL: '-'?[0-9]+ DOT [0-9]+;


WS: [ \r\t\n] -> skip;






