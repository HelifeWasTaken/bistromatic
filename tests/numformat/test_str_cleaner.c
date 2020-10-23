/*
** EPITECH PROJECT, 2020
** str_cleaner
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <my_stdlib.h>
#include <my_numformat.h>

char *str_cleaner(char *raw_str);

Test(my_str_cleaner, test_simple_arithmetic)
{
    cr_assert_str_eq(str_cleaner(my_strdup("89+--+45")), "89+45");
}

Test(my_str_cleaner, test_simple_arithmetic_with_only_minus_to_positive)
{
    cr_assert_str_eq(str_cleaner(my_strdup("--78--74")), "78+74");
}

Test(my_str_cleaner, test_simple_arithmetic_with_only_minus_to_minus)
{
    cr_assert_str_eq(str_cleaner(my_strdup("-----78-+---+-74-89")), "-78-74-89");
}

Test(my_str_cleaner, trying_simple_arithmetics_high_priorities)
{
    cr_assert_str_eq(str_cleaner(my_strdup("--78+58/--97*-58")), "78+58/97*-58");
}

Test(my_str_cleaner, trying_simple_arithmetics_high_priorities_v2)
{
    cr_assert_str_eq(str_cleaner(my_strdup("+--+97/-89*--+---+-13*-5")), "97/-89*13*-5");
}

Test(my_str_cleaner, trying_harder_arithmetics_with_high_priorities)
{
    cr_assert_str_eq(str_cleaner(my_strdup("+--+-(789*-(78---+-45/78)--54)")), "-(789*-(78+45/78)+54)");
}

Test(my_str_cleaner, trying_harder_arithmetics_with_high_priorities_v2)
{
    cr_assert_str_eq(str_cleaner(my_strdup("+----+--((2009*--+--2/--+--20--(-+2)))")), "((2009*2/20+(-2)))");
}
