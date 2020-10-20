/*
** EPITECH PROJECT, 2020
** test_get_global_sign
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include "../../lib/numformat/my_num_format.h"

Test(get_global_sign, negative_and_positive)
{
    cr_assert_eq(get_global_sign("-4", "5"), '-');
}

Test(get_global_sign, positive_and_positive)
{
    cr_assert_eq(get_global_sign("4", "5"), '+');
}

Test(get_global_sign, positive_and_negative)
{
    cr_assert_eq(get_global_sign("4", "-5"), '-');
}

Test(get_global_sign, negative_and_negative)
{
    cr_assert_eq(get_global_sign("-4", "-5"), '+');
}
