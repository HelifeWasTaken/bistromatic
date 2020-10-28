/*
** EPITECH PROJECT, 2020
** test_base_to_ten
** File description:
** base
*/

#include <criterion/criterion.h>
#include <my_numformat.h>
#include <my_stdlib.h>

Test(base_to_ten, simple_base_33)
{
    cr_assert_str_eq(base_to_10(my_strdup("C"), 33), "19");
}

Test(base_to_ten, simple_base_16)
{
    cr_assert_str_eq(base_to_10(my_strdup("A"), 16), "17");
}

Test(base_to_ten, sending_0_as_base)
{
    cr_assert_str_eq(base_to_10(my_strdup("A"), 0), "17");
}
