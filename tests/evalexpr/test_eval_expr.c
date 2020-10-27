/*
** EPITECH PROJECT, 2020
** test_eval_expr
** File description:
** Test
*/
#include <criterion/criterion.h>

char *eval_expr(char const *str);

Test (eval_expr, one)
{
    cr_expect_str_eq(eval_expr("1"), "1");
}

Test (eval_expr, minus_one)
{
    cr_expect_str_eq(eval_expr("-1"), "-1");
}

Test (eval_expr, one_plus_one)
{
    cr_expect_str_eq(eval_expr("1+1"), "2");
}

Test (eval_expr, zero_plus_one)
{
    cr_expect_str_eq(eval_expr("0+1"), "1");
}

Test (eval_expr, zero_minus_one)
{
    cr_expect_str_eq(eval_expr("0-1"), "-1");
}

Test (eval_expr, one_minus_minus_one)
{
    cr_expect_str_eq(eval_expr("1--1"), "2");
}

Test (eval_expr, two_times_brackets)
{
    cr_expect_str_eq(eval_expr("2*(1+1)"), "4");
}

Test (eval_expr, brackets_times_two)
{
    cr_expect_str_eq(eval_expr("(1+1)*2"), "4");
}

Test (eval_expr, brackets_times_brackets)
{
    cr_expect_str_eq(eval_expr("(1+1)*(1+1)"), "4");
}

Test (eval_expr, one_plus_multiplication)
{
    cr_expect_str_eq(eval_expr("1+24*3"), "73");
}

Test (eval_expr, multiplication_redivided)
{
    cr_expect_str_eq(eval_expr("2*3/2"), "3");
}

Test (eval_expr, brackets_one)
{
    cr_expect_str_eq(eval_expr("(1)"), "1");
}

Test (eval_expr, minus_brackets)
{
    cr_expect_str_eq(eval_expr("-(1)"), "-1");
}

Test (eval_expr, one_plus_brackets_times_three)
{
    cr_expect_str_eq(eval_expr("1+(2)*3"), "7");
}

Test (eval_expr, brackets_one_plus_one)
{
    cr_expect_str_eq(eval_expr("(1+1)"), "2");
}

Test (eval_expr, brackets_multiplication_redivided)
{
    cr_expect_str_eq(eval_expr("(1+24*3)"), "73");
}

Test (eval_expr, multi_brackets_one)
{
    cr_expect_str_eq(eval_expr("((1))"), "1");
}

Test (eval_expr, multi_brackets_one_plus_one)
{
    cr_expect_str_eq(eval_expr("((1+1))"), "2");
}

Test (eval_expr, multi_brackets_multiplication_redivided)
{
    cr_expect_str_eq(eval_expr("((1+24*3))"), "73");
}

Test (eval_expr, bracket_times_bracket_in_a_bracket)
{
    cr_expect_str_eq(eval_expr("((1+1)*(2-1))"), "2");
}

Test (eval_expr, unbalanced_brackets)
{
    cr_expect_str_eq(eval_expr("(1"), "0");
}

Test (eval_expr, four_divided_by_bracket_plus_two)
{
    cr_expect_str_eq(eval_expr("4/(2)+2"), "4");
}
