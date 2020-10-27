/*
** EPITECH PROJECT, 2020
** expr_utils
** File description:
** Source code
*/
#include <stdlib.h>
#include <stdio.h>
#include "expr.h"
#include <my_opp.h>

expr_node_t *new_number_node(char *number)
{
    expr_node_t *current = malloc(sizeof(expr_node_t));
    current->is_computed = 1;
    current->result = number;
    current->node1 = NULL;
    current->node2 = NULL;
    current->operator = '\0';
    return (current);
}

expr_node_t *new_expr_node(expr_node_t *node1, char op, expr_node_t *node2)
{
    expr_node_t *current = malloc(sizeof(expr_node_t));

    if (node1 == NULL)
        node1 = new_number_node("0");
    if (node2 == NULL)
        node2 = new_number_node("0");
    current->is_computed = 0;
    current->result = 0;
    current->node1 = node1;
    current->node2 = node2;
    current->operator = op;
    return (current);
}

char *compute(expr_node_t *node)
{
    char *result = NULL;

    if (!node->is_computed) {
        if (!node->node1->is_computed)
            compute(node->node1);
        if (!node->node2->is_computed)
            compute(node->node2);
        result = op_parser(node->node1->result, node->node2->result,
                node->operator);
        node->result = result;
        node->is_computed = 1;
    }
    return (node->result);
}

void free_expr(expr_node_t *node)
{
    if (node->node1 != NULL) {
        free_expr(node->node1);
        node->node1 = NULL;
    }
    if (node->node2 != NULL) {
        free_expr(node->node2);
        node->node2 = NULL;
    }
    free(node);
}
