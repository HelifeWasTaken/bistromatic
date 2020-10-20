/*
** EPITECH PROJECT, 2020
** test_add
** File description:
** test add
*/

#include <criterion/criterion.h>
#include <my_numformat.h>

char *my_add(char *s1, char *s2);

Test(my_add, simple_add)
{
    cr_assert_str_eq(my_add("1", "1"), "2");
}

Test(my_add, overlimit_add)
{
    cr_assert_str_eq(my_add("98765432100", "85584"), "98765517684");
}

Test(my_add, overlimit_add_v2)
{
    cr_assert_str_eq(my_add("85584","98765432100"), "98765517684");
}

Test(my_add, rdm_test)
{
    cr_assert_str_eq(my_add("1", "99"), "100");
}
