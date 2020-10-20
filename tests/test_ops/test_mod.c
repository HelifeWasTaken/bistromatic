/*
** EPITECH PROJECT, 2020
** test_mod
** File description:
** make unit test of modulo function*
*/

#include <criterion/criterion.h>
#include <my_numformat.h>

char my_mod(char *s1, char *s2);

Test(my_mod, test_modulo_two)
{
    cr_assert_str_eq(my_mod("2", "2"), "0");
}

Test(my_mod, test_modulo_dix)
{
    cr_assert_str_eq(my_mod("254", "10"), "25");
}

Test(my_mod, Test_modulo_high_numbered)
{
    cr_assert_str_eq(my_mod("5848821441", "25454555"), "19728346");
}
