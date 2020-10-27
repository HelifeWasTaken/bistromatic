/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** Evaluate expressions
*/
#include "parser.h"
#include "expr.h"

char *eval_expr(char const *str)
{
    char *expr = (char *)str;
    expr_node_t *node = make_tree(&expr, 1);
    char *res = compute(node);
    free_expr(node);
    return (res);
}