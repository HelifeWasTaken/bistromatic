/*
** EPITECH PROJECT, 2020
** parser
** File description:
** Source code
*/

#include <stdlib.h>
#include "expr.h"
#include "tokens.h"
#include "parser.h"
#include "parser_brackets.h"

int get_next_priority(char **expr, int has_a_number_before)
{
    char *lookahead = *expr;
    operator_token_t o = {'\0', 0};

    if (has_a_number_before) {
        number(&lookahead);
    }
    o = operator(&lookahead);
    return (o.priority);
}

expr_node_t *get_first_element(char **expr, int priority)
{
    expr_node_t *brackets_node = handle_brackets(expr);
    if (brackets_node != NULL)
        return (brackets_node);
    if (get_next_priority(expr, 1) > priority)
        return (make_tree(expr, priority + 1));
    return (new_number_node(number(expr)));
}

expr_node_t *get_element(char **expr, expr_node_t *prev_node, int priority)
{
    operator_token_t o = operator(expr);
    expr_node_t *tmp_node = NULL;
    expr_node_t *brackets_node = handle_brackets(expr);
    char *nb = NULL;

    if (brackets_node != NULL) {
        operator_token_t next_o = operator(expr);
        if (next_o.priority > priority) {
            tmp_node = make_tree(expr, priority + 1);
            tmp_node = new_expr_node(brackets_node, next_o.symbol, tmp_node);
            return (new_expr_node(prev_node, o.symbol, tmp_node));
        }
        *expr -= 1;
        return (new_expr_node(prev_node, o.symbol, brackets_node));
    }
    if (o.priority == priority) {
        tmp_node = make_tree(expr, priority + 1);
        return (new_expr_node(prev_node, o.symbol, tmp_node));
    }
    nb = number(expr);
    return (new_expr_node(prev_node, o.symbol, new_number_node(nb)));
}

expr_node_t *make_tree(char **expr, int priority)
{
    expr_node_t *node = get_first_element(expr, priority);
    while (get_next_priority(expr, 0) >= priority) {
        node = get_element(expr, node, priority);
    }
    return (node);
}