/*
** EPITECH PROJECT, 2020
** test_mod
** File description:
** make unit test of modulo function*
*/

#include <criterion/criterion.h>
#include <my_numformat.h>
#include <my_stdlib.h>

char *my_mod(char *s1, char *s2);

Test(my_mod, test_modulo_two)
{
    cr_assert_str_eq(my_mod(my_strdup("2"), my_strdup("2")), "0");
}

Test(my_mod, test_modulo_dix)
{
    cr_assert_str_eq(my_mod(my_strdup("254"), my_strdup("10")), "4");
}

Test(my_mod, Test_modulo_high_numbered)
{
    cr_assert_str_eq(my_mod(my_strdup("5848821441"), my_strdup("25454555")), "19728346");
}

Test(my_mod, s2_higher_than_s1)
{
    cr_assert_str_eq(my_mod(my_strdup("45"), my_strdup("90")), "45");
}

Test(my_mod, modulo_by_zero, .exit_code=84)
{
    my_mod(my_strdup("789"), my_strdup("0"));
}

Test(my_mod, modulo_negative_s1)
{
    cr_assert_str_eq(my_mod(my_strdup("-789"), my_strdup("46")), "7");
}

Test(my_mod, modulo_negative_s2)
{
    cr_assert_str_eq(my_mod(my_strdup("789"), my_strdup("-46")), "7");
}

Test(my_mod, modulo_negative_both)
{
    cr_assert_str_eq(my_mod(my_strdup("-789"), my_strdup("-46")), "-7");
}
