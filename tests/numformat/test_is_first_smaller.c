/*
** EPITECH PROJECT, 2020
** test_get_lowest
** File description:
** Unit tests
*/

#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>
#include <stdbool.h>

Test(is_first_smaller, ten_and_twelve)
{
    cr_assert_eq(is_first_smaller("10", "12"), true);
}

Test(is_first_smaller, thirteen_and_eleven)
{
    cr_assert_eq(is_first_smaller("30", "11"), false);
}

Test(is_first_smaller, five_and_a_hundred)
{
    cr_assert_eq(is_first_smaller("5", "100"), true);
}

Test(is_first_smaller, fifteen_and_five)
{
    cr_assert_eq(is_first_smaller("50", "5"), false);
}
