/*
** EPITECH PROJECT, 2020
** my_pow_int_test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <my_opp.h>
#include <my_stdlib.h>

Test(my_pow_int, test_pow_int_v1)
{
    cr_assert_str_eq(my_pow_int(my_strdup("456"), 0), "1");
}

Test(my_pow_int, test_pow_int_v2)
{
    cr_assert_str_eq(my_pow_int(my_strdup("456"), -1), "1");
}

Test(my_pow_int, test_pow_int_v3)
{
    cr_assert_str_eq(my_pow_int(my_strdup("456"), 1), "456");
}
