/*
** EPITECH PROJECT, 2020
** remove_trailing_zeroes
** File description:
** remove_them
*/

#include <criterion/criterion.h>
#include <my_numformat.h>
#include <my_stdlib.h>

Test(remove_trailing_zeroes, simple_fill_of_zeroes)
{
    cr_assert_str_eq(remove_trailing_zeroes(my_strdup("00000000")), "0");
}

Test(remove_trailing_zeroes, one_digit_in_the_middle)
{
    cr_assert_str_eq(remove_trailing_zeroes(my_strdup("00001000")), "00001");
}

Test(remove_trailing_zeroes, but_sending_empty_str)
{
    cr_assert_str_eq(remove_trailing_zeroes(my_strdup("")), "0");
}
