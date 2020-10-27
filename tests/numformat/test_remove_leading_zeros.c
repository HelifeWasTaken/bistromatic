/*
** EPITECH PROJECT, 2020
** remove_leading_zeroes
** File description:
** remove_them
*/

#include <criterion/criterion.h>
#include <my_numformat.h>
#include <my_stdlib.h>

Test(remove_leading_zeroes, simple_fill_of_zeroes)
{
    cr_assert_str_eq(remove_leading_zeroes(my_strdup("00000000")), "0");
}

Test(remove_leading_zeroes, one_digit_in_the_middle)
{
    cr_assert_str_eq(remove_leading_zeroes(my_strdup("00001000")), "1000");
}
