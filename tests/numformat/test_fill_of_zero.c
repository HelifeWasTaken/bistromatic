/*
** EPITECH PROJECT, 2020
** test_fill_of_zero
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_stdlib.h>
#include <my_numformat.h>

Test(fill_of_zero, fill_a_single_digit)
{
    char *s1 = my_strdup("43");
    char *s2 = my_strdup("5");
    cr_assert_str_eq(fill_of_zero(s1, s2), "50");
}

Test(fill_of_zero, fill_multiple_digits)
{
    char *s1 = my_strdup("445");
    char *s2 = my_strdup("54");
    cr_assert_str_eq(fill_of_zero(s1, s2), "540");
}

Test(fill_of_zero, fill_numbers_of_same_length)
{
    char *s1 = my_strdup("445");
    char *s2 = my_strdup("545");
    cr_assert_str_eq(fill_of_zero(s1, s2), "545");
}
