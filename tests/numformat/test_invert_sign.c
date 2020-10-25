/*
** EPITECH PROJECT, 2020
** test_invert_number
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

Test(invert_sign, five)
{
    cr_assert_str_eq(invert_sign("5"), "-5");
}

Test(invert_sign, minus_eight)
{
    cr_assert_str_eq(invert_sign("-8"), "8");
}

Test(invert_sign, zero)
{
    cr_assert_str_eq(invert_sign("0"), "0");
}

Test(invert_sign, forty_two)
{
    cr_assert_str_eq(invert_sign("42"), "-42");
}