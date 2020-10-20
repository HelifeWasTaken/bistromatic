/*
** EPITECH PROJECT, 2020
** test_add
** File description:
** test add
*/

#include <criterion/criterion.h>
#include <my_numformat.h>
#include <my_stdlib.h>

char *my_add(char *s1, char *s2);

Test(my_add, simple_add)
{
    cr_assert_str_eq(my_add(my_strdup("1"), my_strdup("1")), "2");
}

Test(my_add, overlimit_add)
{
    cr_assert_str_eq(my_add(my_strdup("98765432100"), my_strdup("85584")), "98765517684");
}

Test(my_add, overlimit_add_v2)
{
    cr_assert_str_eq(my_add(my_strdup("85584"),my_strdup("98765432100")), "98765517684");
}

Test(my_add, rdm_test)
{
    cr_assert_str_eq(my_add(my_strdup("1"), my_strdup("99")), "100");
}
