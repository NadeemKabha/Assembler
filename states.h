#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

enum opcode
{
    MOV,
    CMP,
    ADD,
    SUB,
    NOT,
    CLR,
    LEA,
    INC,
    DEC,
    JMP,
    BNE,
    RED,
    PRN,
    JSR,
    RTS,
    STOP
};

enum directivecode
{
    DATA,
    STRING,
    ENTRY,
    EXTERN
};