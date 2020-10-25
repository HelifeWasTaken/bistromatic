/*
** EPITECH PROJECT, 2020
** test_invert_number
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_stdlib.h>
#include <my_numformat.h>

Test(invert_sign, five)
{
    cr_assert_str_eq(invert_sign(my_strdup("5")), "-5");
}

Test(invert_sign, minus_eight)
{
    cr_assert_str_eq(invert_sign(my_strdup("-8")), "8");
}

Test(invert_sign, zero)
{
    cr_assert_str_eq(invert_sign(my_strdup("0")), "0");
}

Test(invert_sign, forty_two)
{
    cr_assert_str_eq(invert_sign(my_strdup("42")), "-42");
}

Test(invert_sign, minus_nine_hundred_and_eighty_seven)
{
    cr_assert_str_eq(invert_sign(my_strdup("-987")), "987");
}
