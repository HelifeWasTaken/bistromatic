/*
** EPITECH PROJECT, 2020
** are_equalss
** File description:
** aled
*/

#include <criterion/criterion.h>
#include <stdbool.h>
#include <my_numformat.h>

Test(are_equals, are_not_equals)
{
    cr_assert_eq(are_equals("--45687", "+789"), false);
}

Test(are_equals, are_equals)
{
    cr_assert_eq(are_equals("45687", "++45687"), true);
}

Test(are_equals, are_excatly_the_same)
{
    cr_assert_eq(are_equals("-789", "-789"), true);
}

Test(are_equals, not_same_sign)
{
    cr_assert_eq(are_equals("789", "-789"), false);
}
