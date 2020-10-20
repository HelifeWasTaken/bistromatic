/*
** EPITECH PROJECT, 2020
** test_get_sign
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include "../../lib/numformat/my_num_format.h"

Test(get_sign, negative)
{
    cr_assert_eq(get_sign("-5"), '-');
}

Test(get_sign, double_negative)
{
    cr_assert_eq(get_sign("--6"), '+');
}

Test(get_sign, triple_negative)
{
    cr_assert_eq(get_sign("---8"), '-');
}

Test(get_sign, quad_negative)
{
    cr_assert_eq(get_sign("----9"), '+');
}

Test(get_sign, implicit_positive)
{
    cr_assert_eq(get_sign("5"), '+');
}

Test(get_sign, positive)
{
    cr_assert_eq(get_sign("+3"), '+');
}

Test(get_sign, double_positive)
{
    cr_assert_eq(get_sign("++3"), '+');
}

Test(get_sign, alternate)
{
    cr_assert_eq(get_sign("+-+-++-+-7"), '+');
}

Test(get_sign, alternate_v2)
{
    cr_assert_eq(get_sign("++-++-+-+6"), '-');
}