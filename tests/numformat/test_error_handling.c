/*
** EPITECH PROJECT, 2020
** error_check_arithmetic_expression
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <my_stdlib.h>
#include <my_numformat.h>
#include <stdbool.h>

Test(error_handler, test_simple_arithmetic_check)
{
    cr_assert_eq(check_arithmetic_logic(str_cleaner(my_strdup("89+--+45"))), true);
}

Test(error_handler, test_simple_arithmetic_with_only_minus_to_positive_chec)
{
    cr_assert_eq(check_arithmetic_logic(str_cleaner(my_strdup("--78--74"))), true);
}

Test(error_handler, test_simple_arithmetic_with_only_minus_to_minus_trying_to_confuse_the_program_simply)
{
    cr_assert_eq(error_check_arithmetic_expression(my_strdup("-----78-+---+-74-89")), true);
}

Test(error_handler, trying_simple_arithmetics_confusing_high_priorities)
{
    cr_assert_eq(check_arithmetic_logic(str_cleaner(my_strdup("--78+58/--97*-58"))), true);
}

Test(error_handler, trying_simple_arithmetics_confusing_high_priorities_v2)
{
    cr_assert_eq(error_check_arithmetic_expression(my_strdup("+--+97/-89*--+---+-03*-5")), true);
}

Test(error_handler, trying_harder_arithmetics_confusing_with_high_priorities)
{
    cr_assert_eq(error_check_arithmetic_expression(my_strdup("+--+-(789*-(78---+-45/78)--54)")), true);
}

Test(error_handler, trying_harder_arithmetics_with_confusing_high_priorities_v2)
{
    cr_assert_eq(check_arithmetic_logic(str_cleaner(my_strdup("+----+--((2009*--+--2/--+--20--(-+2)))"))), true);
}

Test(error_handler, trying_simple_failure_check_paranthesis)
{
    cr_assert_eq(check_nb_parentheses(my_strdup("(55+12")), false);
}

Test(error_handler, trying_simple_failure_check_paranthesis_v2)
{
    cr_assert_eq(check_nb_parentheses(str_cleaner(my_strdup("((556745+(12374))"))), false);
}

Test(error_handler, trying_check_string_validity_v1)
{
    cr_assert_eq(check_str_validity(my_strdup("(123546+87a990)+18")), false);
}

Test(error_handler, trying_check_string_validity_v2)
{
    cr_assert_eq(check_str_validity(my_strdup("(123546+87990)+18/p")), false);
}

Test(error_handler, trying_to_check_arithmetic_logic_simple)
{
    cr_assert_eq(check_arithmetic_logic(my_strdup("123+321")), true);
}

Test(error_handler, trying_to_check_arithmetic_logic_simple_v2)
{
    cr_assert_eq(check_arithmetic_logic(my_strdup("+123+-321")), true);
}

Test(error_handler, trying_to_check_arithmetic_logic_harder)
{
    cr_assert_eq(check_arithmetic_logic(my_strdup("(4561+478)/595-456*1211")), false);
}

Test(error_handler, trying_to_check_arithmetic_logic_harder_v2)
{
    cr_assert_eq(check_arithmetic_logic(my_strdup("(4561+478)/595-456*1211+")), false);
}

Test(error_handler, trying_to_check_arithmetic_logic_harder_v3)
{
    cr_assert_eq(check_arithmetic_logic(my_strdup("(4561+478)-/595-456+*1211")), false);
}

Test(error_handler, trying_to_check_for_wrong_type_of_char_sent)
{
    cr_assert_eq(check_str_validity(my_strdup("z")), false);
}

Test(error_handler, trying_to_check_for_each_type_of_operator_plus_parentheses)
{
    cr_assert_eq(check_str_validity(my_strdup("+-/*%()")), true);
}

Test(error_handler, trying_to_check_for_each_type_of_operator_plus_parentheses_and_one_false)
{
    cr_assert_eq(check_str_validity(my_strdup("+-/*%()a")), false);
}

Test(error_handler, validating_str_but_not_parentheses)
{
    cr_assert_eq(error_check_arithmetic_expression(my_strdup("654*((+89)")), false);
}

Test(error_handler, validating_str_but_not_logic)
{
    cr_assert_eq(error_check_arithmetic_expression(my_strdup("654+/*(90)")), false);
}

Test(error_handler, validating_nothing)
{
    cr_assert_eq(error_check_arithmetic_expression(my_strdup("lol5(*/()))")), false);
}

Test(error_handler, checking_multiple_definitions_but_everything_is_okay)
{
    cr_assert_eq(error_check_multiple_definition("0123456789", "()+-*/%"), true);
}

Test(error_handler, checking_multiple_definitions_but_operator_is_not_okay)
{
    cr_assert_eq(error_check_multiple_definition("0123456789", "()++*/%"), false);
}

Test(error_handler, checking_multiple_definitions_but_base_is_not_okay)
{
    cr_assert_eq(error_check_multiple_definition("0123456719", "()+-*/%"), false);
}

Test(error_handler, checking_multiple_definitions_between_base_and_operators_but_this_is_not_okay_in_base)
{
    cr_assert_eq(error_check_multiple_definition("01234567+9", "()+-*/%"), false);
}

Test(error_handler, checking_multiple_definitions_between_base_and_operators_but_this_is_not_okay_in_operator)
{
    cr_assert_eq(error_check_multiple_definition("0123456789", "()+-*/9"), false);
}

Test(error_handler, checking_multiple_definitions_between_base_and_operators_but_everything_is_okay)
{
    cr_assert_eq(error_check_multiple_definition("0123456789", "()+-*/%"), true);
}
