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
    cr_assert_str_eq(fill_of_zero(s1, 3), "430");
}

Test(fill_of_zero, fill_multiple_digits)
{
    char *s1 = my_strdup("54");
    cr_assert_str_eq(fill_of_zero(s1, 3), "540");
}

Test(fill_of_zero, fill_numbers_of_same_length)
{
    char *s1 = my_strdup("545");
    cr_assert_str_eq(fill_of_zero(s1, 3), "545");
}
