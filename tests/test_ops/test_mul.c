/*
** EPITECH PROJECT, 2020
** test_mult
** File description:
** mult test
*/

#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

char *my_mul(char *s1, char *s2);

Test(my_mul, high_numbered_mult)
{
    cr_assert_str_eq(my_mul("5", "2000000000"), "10000000000");
}

Test(my_mul, high_low_nubered)
{
    cr_assert_str_eq(my_mul("5", "6"), "30");
}

Test(my_mul, one_low_neg_numbered)
{
    cr_assert_str_eq(my_mul("2843", "-2"), "-5686");
}

Test(my_mul, two_neg_number)
{
    cr_assert_str_eq(my_mul("-3", "-54"), "162");
}

Test(my_mul, high_numbered_mult_neg)
{
    cr_assert_str_eq(my_mul("-5", "2000000000"), "-10000000000");
}

Test(my_mul, high_numbered_mult_two_neg)
{
    cr_assert_str_eq(my_mul("-5", "-2000000000"), "10000000000");
}

Test(my_mul, wtf_is_even_this_number_v1)
{
    cr_assert_str_eq(my_mul("-9874562313", "8945623109865235623"), "-88334112826977114191740875999");
}
