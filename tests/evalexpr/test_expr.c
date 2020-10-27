/*
** EPITECH PROJECT, 2020
** test_expr
** File description:
** Test
*/
#include <criterion/criterion.h>
#include "../../source/evalexpr/expr.h"

Test (new_expr_node, create)
{
    expr_node_t *node = new_expr_node(new_number_node("1"), '+', new_number_node("2"));
    cr_assert_not_null(node);
    cr_assert_not_null(node->node1);
    cr_assert_not_null(node->node2);
    cr_assert_neq(node->operator, '\0');
    cr_expect_eq(node->is_computed, 0);
}

Test (new_number_node, create)
{
    expr_node_t *node = new_number_node("1");
    cr_assert_not_null(node);
    cr_assert_eq(node->operator, '\0');
    cr_expect_str_eq(node->result, "1");
    cr_expect_eq(node->is_computed, 1);
}

Test (compute, compute_number)
{
    expr_node_t *node = new_number_node("1");
    cr_expect_str_eq(compute(node), "1");
}

Test (compute, compute_operation)
{
    expr_node_t *node = new_expr_node(new_number_node("1"), '+', new_number_node("2"));
    cr_expect_str_eq(compute(node), "3");
}

Test (compute, compute_one_suboperation)
{
    expr_node_t *subnode = new_expr_node(new_number_node("2"), '*', new_number_node("2"));
    expr_node_t *node = new_expr_node(subnode, '+', new_number_node("2"));
    cr_expect_str_eq(compute(node), "6");
}

Test (compute, compute_two_suboperations)
{
    expr_node_t *subnode1 = new_expr_node(new_number_node("2"), '*', new_number_node("2"));
    expr_node_t *subnode2 = new_expr_node(new_number_node("3"), '*', new_number_node("3"));
    expr_node_t *node = new_expr_node(subnode1, '+', subnode2);
    cr_expect_str_eq(compute(node), "13");
}

Test (compute, compute_null_with_something)
{
    expr_node_t *node = new_expr_node(NULL, '+', new_number_node("1"));
    cr_expect_str_eq(compute(node), "1");
}

Test (compute, compute_something_with_null)
{
    expr_node_t *node = new_expr_node(new_number_node("1"), '+', NULL);
    cr_expect_str_eq(compute(node), "1");
}

Test(free_expr, free) {
    expr_node_t *node = new_expr_node(NULL, '+', new_number_node("1"));
    free_expr(node);
}
