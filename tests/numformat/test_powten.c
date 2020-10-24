/*
** EPITECH PROJECT, 2020
** test_get_lowest
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

Test(powten, five_and_two)
{
    cr_assert_str_eq(powten("5", 2), "500");
}

Test(powten, five_hundred_and_minus_one)
{
    cr_assert_str_eq(powten("500", -1), "50");
}

Test(powten, ten_and_two)
{
    cr_assert_str_eq(powten("10", 2), "1000");
}


Test(powten, twelve_and_minus_one)
{
    cr_assert_str_eq(powten("12", -1), "1");
}
