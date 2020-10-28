/*
** EPITECH PROJECT, 2020
** tokens
** File description:
** Source code
*/

#include <stdlib.h>
#include <my_str.h>
#include <my_stdlib.h>
#include <my_numformat.h>
#include "tokens.h"

void consume_char(char **expr)
{
    (*expr)++;
}

char *number(char **expr)
{
    char *number = malloc(sizeof(char) * (my_strlen(*expr) + 1));
    int i = 0;

    my_bzero(number, my_strlen(*expr) + 1);
    while ((**expr >= '0' && **expr <= '9') || (i == 0 && **expr == '-')) {
        number[i] = **expr;
        consume_char(expr);
        i++;
    }
    number = remove_leading_zeroes(number);
    return (number);
}

operator_token_t operator(char **expr)
{
    int i = 0;
    const operator_token_t operators_tokens[] = {
        {'*', 2},
        {'/', 2},
        {'%', 2},
        {'+', 1},
        {'-', 1},
        {'\0', 0}
    };

    while (operators_tokens[i].symbol != '\0') {
        if (operators_tokens[i].symbol == **expr)
            break;
        i++;
    }
    consume_char(expr);
    return (operators_tokens[i]);
}
