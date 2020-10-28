/*
** EPITECH PROJECT, 2020
** test_eval_expr
** File description:
** Test
*/
#include <criterion/criterion.h>

char *eval_expr(char const *str);

Test(eval_expr, one)
{
    cr_expect_str_eq(eval_expr("1"), "1");
}

Test(eval_expr, minus_one)
{
    cr_expect_str_eq(eval_expr("-1"), "-1");
}

Test(eval_expr, one_plus_one)
{
    cr_expect_str_eq(eval_expr("1+1"), "2");
}

Test(eval_expr, zero_plus_one)
{
    cr_expect_str_eq(eval_expr("0+1"), "1");
}

Test(eval_expr, zero_minus_one)
{
    cr_expect_str_eq(eval_expr("0-1"), "-1");
}

Test(eval_expr, one_minus_minus_one)
{
    cr_expect_str_eq(eval_expr("1--1"), "2");
}

Test(eval_expr, two_times_brackets)
{
    cr_expect_str_eq(eval_expr("2*(1+1)"), "4");
}

Test(eval_expr, brackets_times_two)
{
    cr_expect_str_eq(eval_expr("(1+1)*2"), "4");
}

Test(eval_expr, brackets_times_brackets)
{
    cr_expect_str_eq(eval_expr("(1+1)*(1+1)"), "4");
}

Test(eval_expr, one_plus_multiplication)
{
    cr_expect_str_eq(eval_expr("1+24*3"), "73");
}

Test(eval_expr, multiplication_redivided)
{
    cr_expect_str_eq(eval_expr("2*3/2"), "3");
}

Test(eval_expr, brackets_one)
{
    cr_expect_str_eq(eval_expr("(1)"), "1");
}

Test(eval_expr, minus_brackets)
{
    cr_expect_str_eq(eval_expr("-(1)"), "-1");
}

Test(eval_expr, one_plus_brackets_times_three)
{
    cr_expect_str_eq(eval_expr("1+(2)*3"), "7");
}

Test(eval_expr, brackets_one_plus_one)
{
    cr_expect_str_eq(eval_expr("(1+1)"), "2");
}

Test(eval_expr, brackets_multiplication_redivided)
{
    cr_expect_str_eq(eval_expr("(1+24*3)"), "73");
}

Test(eval_expr, multi_brackets_one)
{
    cr_expect_str_eq(eval_expr("((1))"), "1");
}

Test(eval_expr, multi_brackets_one_plus_one)
{
    cr_expect_str_eq(eval_expr("((1+1))"), "2");
}

Test(eval_expr, multi_brackets_multiplication_redivided)
{
    cr_expect_str_eq(eval_expr("((1+24*3))"), "73");
}

Test(eval_expr, bracket_times_bracket_in_a_bracket)
{
    cr_expect_str_eq(eval_expr("((1+1)*(2-1))"), "2");
}

Test(eval_expr, unbalanced_brackets)
{
    cr_expect_str_eq(eval_expr("(1"), "0");
}

Test(eval_expr, four_divided_by_bracket_plus_two)
{
    cr_expect_str_eq(eval_expr("4/(2)+2"), "4");
}

Test(eval_expr, help_me_please)
{
    cr_expect_str_eq(eval_expr("798*12+74/2+(8*4)"), "9645");
}

Test(eval_expr, help_me_please_v2)
{
    cr_expect_str_eq(eval_expr("798*12+74/2+(8*4)+89*2/47+123*(46-54)"), "8664");
}

Test(eval_expr, simpleOB_arith)
{
    cr_expect_str_eq(eval_expr("789/58*2+78"), "104");
}

Test(eval_expr, division_same)
{
    cr_expect_str_eq(eval_expr("44444444444/4444444444"), "10");
}

Test(eval_expr, destruction_overkill)
{
    cr_expect_str_eq(eval_expr("798456*123/100+45*(12-789+78*41-13+(46*78-12))+103/2"), "1251431");
}
