/*
** EPITECH PROJECT, 2020
** test_mult
** File description:
** mult test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_stdlib.h>
#include <my_numformat.h>
#include <bistromatic.h>

char *my_div(char *s1, char *s2);

Test(my_div, one_divided_by_one)
{
    cr_assert_str_eq(my_div(my_strdup("1"), my_strdup("1")), "1");
}

Test(my_div, high_numbered_div)
{
    cr_assert_str_eq(my_div(my_strdup("500000"), my_strdup("3")), "166666");
}

Test(my_div, high_numbered_div_v2)
{
    cr_assert_str_eq(my_div(my_strdup("500000"), my_strdup("2")), "250000");
}

Test(my_div, high_low_nubered)
{
    cr_assert_str_eq(my_div(my_strdup("2424"), my_strdup("5")), "484");
}

Test(my_div, one_low_neg_numbered)
{
    cr_assert_str_eq(my_div(my_strdup("-100"), my_strdup("1")), "-100");
}

Test(my_div, s2_higher_than_s1)
{
    cr_assert_str_eq(my_div(my_strdup("45"), my_strdup("90")), "0");
}

Test(my_div, division_by_zero, .exit_code=84)
{
    my_div(my_strdup("789"), my_strdup("0"));
}

Test(my_div, loong_division_v1, .timeout=10)
{
    cr_assert_str_eq(my_div(my_strdup("3187904567890"), my_strdup("3")), "1062634855963");
}

Test(my_div, loong_division_v2, .timeout=10)
{
    cr_assert_str_eq(my_div(my_strdup("1237564212357489"), my_strdup("7")), "176794887479641");
}

Test(my_div, loong_division_v3, .timeout=10)
{
    cr_assert_str_eq(my_div(my_strdup("165498755125487845121156"), my_strdup("4")), "41374688781371961280289");
}
