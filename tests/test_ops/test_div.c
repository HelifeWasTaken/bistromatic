/*
** EPITECH PROJECT, 2020
** test_mult
** File description:
** mult test
*/

#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

char *my_div(char *s1, char *s2);

Test(my_div, one_divided_by_one)
{
    cr_assert_str_eq(my_div("1", "1"), "1");
}

Test(my_div, high_numbered_div)
{
    cr_assert_str_eq(my_div("500000", "3"), "166666");
}

Test(my_div, high_numbered_div_v2)
{
    cr_assert_str_eq(my_div("500000", "2"), "250000");
}

Test(my_div, high_low_nubered)
{
    cr_assert_str_eq(my_div("2424", "5"), "484");
}

Test(my_div, one_low_neg_numbered)
{
    cr_assert_str_eq(my_div("-100", "1"), "-100");
}