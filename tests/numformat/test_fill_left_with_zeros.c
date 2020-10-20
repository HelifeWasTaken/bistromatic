/*
** EPITECH PROJECT, 2020
** test_fill_left_with_zeros
** File description:
** Unit tests
*/
#include <criterion/criterion.h>
#include <my_str.h>
#include "../../lib/numformat/my_num_format.h"

Test(fill_left_with_zeros, fill_a_single_digit)
{
    char *s1 = my_strdup("43");
    char *s2 = my_strdup("5");
    cr_assert_str_eq(fill_left_with_zeros(s1, s2), "05");
}

Test(fill_left_with_zeros, fill_multiple_digits)
{
    char *s1 = my_strdup("445");
    char *s2 = my_strdup("54");
    cr_assert_str_eq(fill_left_with_zeros(s1, s2), "054");
}

Test(fill_left_with_zeros, fill_numbers_of_same_length)
{
    char *s1 = my_strdup("445");
    char *s2 = my_strdup("545");
    cr_assert_str_eq(fill_left_with_zeros(s1, s2), "545");
}