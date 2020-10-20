/*
** EPITECH PROJECT, 2020
** test_remove_sign
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include "../../lib/numformat/my_num_format.h"

Test(remove_sign, negative)
{
    cr_assert_str_eq(remove_sign("-54"), "54");
}

Test(remove_sign, double_negative)
{
    cr_assert_str_eq(remove_sign("--33"), "33");
}

Test(remove_sign, triple_negative)
{
    cr_assert_str_eq(remove_sign("---84"), "84");
}

Test(remove_sign, quad_negative)
{
    cr_assert_str_eq(remove_sign("----7"), "7");
}

Test(remove_sign, implicit_positive)
{
    cr_assert_str_eq(remove_sign("52"), "52");
}

Test(remove_sign, positive)
{
    cr_assert_str_eq(remove_sign("+35"), "35");
}

Test(remove_sign, double_positive)
{
    cr_assert_str_eq(remove_sign("++84"), "84");
}

Test(remove_sign, triple_positive)
{
    cr_assert_str_eq(remove_sign("++5"), "5");
}

Test(remove_sign, positive_then_negative_then_positive)
{
    cr_assert_str_eq(remove_sign("+-+59"), "59");
}

Test(remove_sign, negative_then_positive_then_negative)
{
    cr_assert_str_eq(remove_sign("-+-52"), "52");
}

Test(remove_sign, negative_then_positive_then_tony_hawks_pro_skater)
{
    cr_assert_str_eq(remove_sign("-+--++-+++--++++++-23"), "23");
}

Test(remove_sign, negative_then_positive_then_tony_hawks_pro_skater_v2)
{
    cr_assert_str_eq(remove_sign("-++-+-+---++++--++-+23"), "23");
}