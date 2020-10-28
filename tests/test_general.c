/*
** EPITECH PROJECT, 2020
** genral_test
** File description:
** genral
*/

#include <criterion/criterion.h>

char *eval_expr_prepare(char const *base, char const *ops,
                        char const *expr);

Test(eval_expr_prepare, test_fail_arithmetic_expression, .exit_code=84)
{
    eval_expr_prepare("0123456798", "()+-*/%", "5+89(3)");
}

Test(eval_expr_prepare, test_fail_multiple_definition, .exit_code=84)
{
    eval_expr_prepare("0123456798", "()+-*/5", "5+89+3");
}

Test(eval_expr_prepare, everything_is_okay)
{
    cr_assert_str_eq(eval_expr_prepare("0123456789", "()+-*/%", "5+89+3"), "97");
}
