/*
** EPITECH PROJECT, 2020
** test_add
** File description:
** test add
*/

#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>

Test(my_sub, five_minus_five)
{
    cr_assert_eq(my_sub("5", "5"), "0");
}

Test(my_sub, five_minus_six)
{
    cr_assert_eq(my_sub("5", "6"), "-1");
}

Test(my_sub, six_minus_five)
{
    cr_assert_eq(my_sub("6", "5"), "1");
}

Test(my_sub, sub_high_numbered)
{
    cr_assert_eq(my_sub("45005", "5858"), "39147");
}

Test(my_sub, sub_high_numbered_neg)
{
    cr_assert_eq(my_sub("5858", "45005"), "-39147");
}
