/*
** EPITECH PROJECT, 2020
** test_get_highest
** File description:
** Unit tests
*/

#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>
#include <stdbool.h>

Test(is_first_greater, ten_and_twelve)
{
    cr_assert_eq(is_first_greater("10", "12"), false);
}

Test(is_first_greater, thirteen_and_eleven)
{
    cr_assert_eq(is_first_greater("30", "11"), true);
}

Test(is_first_greater, five_and_a_hundred)
{
    cr_assert_eq(is_first_greater("5", "100"), false);
}

Test(is_first_greater, fifteen_and_five)
{
    cr_assert_eq(is_first_greater("50", "5"), true);
}

Test(is_first_greater, negative_and_positive)
{
    cr_assert_eq(is_first_greater("-50", "5"), false);
}

Test(is_first_greater, positive_and_negative)
{
    cr_assert_eq(is_first_greater("50", "-2354"), true);
}

Test(is_first_greater, negative_and_negative)
{
    cr_assert_eq(is_first_greater("-123", "-250"), true);
}

Test(is_first_greater, negative_and_negative_v2)
{
    cr_assert_eq(is_first_greater("-2587", "-250"), false);
}

Test(is_first_greater, negative_and_negative_v3)
{
    cr_assert_eq(is_first_greater("-259", "-2587"), true);
}

Test(is_first_greater_unsigned, the_same)
{
    cr_assert_eq(is_first_greater_unsigned("123", "123"), false);
}
