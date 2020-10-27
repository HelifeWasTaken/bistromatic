/*
** EPITECH PROJECT, 2020
** parser_brackets
** File description:
** Source code
*/
#include <my_str.h>
#include <stdlib.h>
#include "parser.h"
#include "expr.h"
#include "tokens.h"

char *build_brackets_expr(char **expr)
{
    int i = 0;
    int brackets_count = 1;
    char *new_expr = malloc(sizeof(char) * (my_strlen(*expr) + 1));

    consume_char(expr);
    while (brackets_count > 0 && **expr != '\0') {
        if (**expr == '(')
            brackets_count++;
        if (**expr == ')')
            brackets_count--;
        new_expr[i] = **expr;
        consume_char(expr);
        i++;
    }
    new_expr[i - 1] = '\0';
    return (new_expr);
}

expr_node_t *handle_brackets(char **expr)
{
    char *new_expr = NULL;
    char *new_expr_cur = NULL;
    int is_negative = 0;
    expr_node_t *node = NULL;

    if (**expr == '-' && (*expr)[1] == '(') {
        is_negative = 1;
        consume_char(expr);
    }
    if (**expr != '(')
        return (NULL);
    new_expr = build_brackets_expr(expr);
    new_expr_cur = new_expr;
    node = make_tree(&new_expr_cur, 1);
    free(new_expr);
    return (is_negative ? new_expr_node(new_number_node("0"), '-', node) : node);
}