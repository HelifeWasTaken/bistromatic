/*
** EPITECH PROJECT, 2020
** expr_node
** File description:
** Header
*/

#ifndef EXPR_H
#define EXPR_H

typedef struct expr_node {
    char *result;
    int is_computed;
    struct expr_node *node1;
    struct expr_node *node2;
    char operator;
} expr_node_t;

expr_node_t *new_number_node(char *number);
expr_node_t *new_expr_node(expr_node_t *node1, char op, expr_node_t *node2);
char *compute(expr_node_t *node);
void free_expr(expr_node_t *node);

#endif