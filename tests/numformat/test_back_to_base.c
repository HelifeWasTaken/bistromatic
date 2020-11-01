/*
** EPITECH PROJECT, 2020
** test_back_to_base
** File description:
** make_test_to_back_to_base
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_numformat.h>

Test(back_to_base, caroline_fait_du_cheval, .init=cr_redirect_stdout)
{
    back_to_base("42", "azertyuiop", '-');
    cr_assert_stdout_eq_str("te");
}

Test(back_to_base, tony_awk_pro_skater_v5, .init=cr_redirect_stdout)
{
    back_to_base("7845", "!#$%&()+-/", '-');
    cr_assert_stdout_eq_str("+-&(");
}

Test(back_to_base, wejdene_level_singing, .init=cr_redirect_stdout)
{
    back_to_base("-5", "!#$%&()+-/", 'e');
    cr_assert_stdout_eq_str("e(");
}
