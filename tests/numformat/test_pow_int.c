/*
** EPITECH PROJECT, 2020
** pow_int
** File description:
** pow
*/

#include <criterion/criterion.h>
#include <my_opp.h>
#include <my_stdlib.h>

Test(my_pow_int, sending_zero_in_it)
{
    cr_assert_str_eq(my_pow_int("123", 0), "1");
}

Test(my_pow_int, sending_2_in_it)
{
    cr_assert_str_eq(my_pow_int(my_strdup("123"), 10), "12300");
}
