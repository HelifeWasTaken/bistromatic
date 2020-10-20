/*
** EPITECH PROJECT, 2020
** test_mult
** File description:
** mult test
*/

#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

char *my_mult(char *s1, char *s2);

Test(my_mult, high_numbered_mult)
{
    cr_assert_eq(my_mult("0000000005", "2000000000"), "10000000000");
}

Test(my_mult, high_low_nubered)
{
    cr_assert_eq(my_mult("5", "6"), "30");
}

Test(my_mult, one_low_neg_numbered)
{
    cr_assert_eq(my_mult("2843", "02-"), "-69640");
}

Test(my_mult, two_neg_number)
{
    cr_assert_eq(my_mult("-003", "-054"), "135000");
}

Test(my_mult, high_numbered_mult_neg)
{
    cr_assert_eq(my_mult("0000000005-", "2000000000"), "-10000000000");
}
Test(my_mult, high_numbered_mult_two_neg)
{
    cr_assert_eq(my_mult("0000000005-", "2000000000-"), "10000000000");
}
