/*
** EPITECH PROJECT, 2020
** test_get_lowest
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

Test(get_lowest, negative)
{
    cr_assert_eq(get_lowest("-30"), 1);
}

Test(get_lowest, positive)
{
    cr_assert_eq(get_lowest("+43"), 0);
}

Test(get_lowest, negative_v2)
{
    cr_assert_eq(get_lowest("-5"), 1);
}

Test(get_lowest, positive_v2)
{
    cr_assert_eq(get_lowest("+3"), 0);
}
