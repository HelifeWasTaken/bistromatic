/*
** EPITECH PROJECT, 2020
** test_tokens
** File description:
** Test
*/
#include <criterion/criterion.h>
#include "../../source/evalexpr/tokens.h"

Test (number, positive_number)
{
    char *expr = "12";
    char *nb = number(&expr);
    cr_assert_str_eq(nb, "12");
    cr_assert_str_eq(expr, "");
}

Test (number, negative_number)
{
    char *expr = "-12";
    char *nb = number(&expr);
    cr_assert_str_eq(nb, "-12");
    cr_assert_str_eq(expr, "");
}

Test (number, positive_digit)
{
    char *expr = "1";
    char *nb = number(&expr);
    cr_assert_str_eq(nb, "1");
    cr_assert_str_eq(expr, "");
}

Test (number, negative_digit)
{
    char *expr = "-1";
    char *nb = number(&expr);
    cr_assert_str_eq(nb, "-1");
    cr_assert_str_eq(expr, "");
}

Test (number, random_stuff)
{
    char *expr = "blah blah blah";
    char *nb = number(&expr);
    cr_assert_str_eq(nb, "0");
    cr_assert_str_eq(expr, "blah blah blah");
}

Test(operator, existant_operator)
{
    char *expr = "%";
    operator_token_t op = operator(&expr);
    cr_assert_eq(op.symbol, '%');
    cr_assert_eq(op.priority, 2);
    cr_assert_str_eq(expr, "");
}
