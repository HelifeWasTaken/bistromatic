/*
** EPITECH PROJECT, 2020
** test_back_to_base
** File description:
** make_test_to_back_to_base
*/

#include <criterion/criterion.h>
#include <my_numformat.h>

Test(back_to_base, caroline_fait_du_cheval)
{
    cr_assert_str_eq(back_to_base("42", "azertyuiop", "()+-*/%"), "te");
}

Test(back_to_base, tony_awk_pro_skater_v5)
{
    cr_assert_str_eq(back_to_base("7845", "!#$%&()+-/", "()+-*/%"), "+-&(");
}

Test(back_to_base, wejdene_level_singing)
{
    cr_assert_str_eq(back_to_base("-5", "!#$%&()+-/", "()+e*/%"), "e(");
}
