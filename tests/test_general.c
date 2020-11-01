/*
** EPITECH PROJECT, 2020
** genral_test
** File description:
** genral
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void eval_expr_prepare(char const *base, char const *ops,
        char const *expr);

Test(eval_expr_prepare, test_fail_arithmetic_expression, .exit_code=84)
{
    eval_expr_prepare("0123456798", "()+-*/%", "5+89(3)");
}

Test(eval_expr_prepare, test_fail_multiple_definition, .exit_code=84)
{
    eval_expr_prepare("0123456798", "()+-*/5", "5+89+3");
}

Test(eval_expr_prepare, everything_is_okay, .init=cr_redirect_stdout)
{
    eval_expr_prepare("0123456789", "()+-*/%", "5+89+3");
    cr_assert_stdout_eq_str("97");
}

Test(eval_expr_prepare, hex_base, .init=cr_redirect_stdout)
{
    eval_expr_prepare("0123456789ABCDEF", "()+-*/%", "A+A");
    cr_assert_stdout_eq_str("14");
}

Test(eval_expr_prepare, weird_ops, .init=cr_redirect_stdout)
{
    eval_expr_prepare("0123456789", "()v-z/j", "10v10z10");
    cr_assert_stdout_eq_str("110");
}

Test(eval_expr_prepare, binary_base_and_weird_ops, .init=cr_redirect_stdout)
{
    eval_expr_prepare("01", "()v-z/j", "10v10z10");
    cr_assert_stdout_eq_str("110");
}
