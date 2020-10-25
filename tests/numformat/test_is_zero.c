/*
** EPITECH PROJECT, 2020
** tests_is_zero
** File description:
** is_zero
*/

#include <criterion/criterion.h>
#include <stdbool.h>

bool is_zero(char const *str);

Test(is_zero, only_has_zero)
{
    cr_assert_eq(is_zero("000000"), true);
}

Test(is_zero, last_one_is_not_a_zero)
{
    cr_assert_eq(is_zero("0000003"), false);
}
