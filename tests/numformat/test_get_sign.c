/*
** EPITECH PROJECT, 2020
** test_get_sign
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

Test(get_sign, negative)
{
    cr_assert_eq(get_sign("-5"), -1);
}

Test(get_sign, double_negative)
{
    cr_assert_eq(get_sign("--6"), 1);
}

Test(get_sign, triple_negative)
{
    cr_assert_eq(get_sign("---8"), -1);
}

Test(get_sign, quad_negative)
{
    cr_assert_eq(get_sign("----9"), 1);
}

Test(get_sign, implicit_positive)
{
    cr_assert_eq(get_sign("5"), 1);
}

Test(get_sign, positive)
{
    cr_assert_eq(get_sign("+3"), 1);
}

Test(get_sign, double_positive)
{
    cr_assert_eq(get_sign("++3"), 1);
}

Test(get_sign, alternate)
{
    cr_assert_eq(get_sign("+-+-++-+-7"), 1);
}

Test(get_sign, alternate_v2)
{
    cr_assert_eq(get_sign("++-++-+-+6"), -1);
}
