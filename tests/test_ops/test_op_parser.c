/*
** EPITECH PROJECT, 2020
** test_op_parser
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <my_opp.h>
#include <my_stdlib.h>

char *op_parser(char *s1, char *s2, char operator);

Test(op_parser_test, simple_addition)
{
    cr_assert_str_eq(op_parser("56", "12", '+'), "68");
}


Test(op_parser_test, simple_substraction)
{
    cr_assert_str_eq(op_parser("56", "12", '-'), "44");
}

Test(op_parser_test, simple_multiplication)
{
    cr_assert_str_eq(op_parser("56", "12", '*'), "672");
}

Test(op_parser_test, addition_with_negative_before)
{
    cr_assert_str_eq(op_parser("-56", "12", '+'), "-44");
}

Test(op_parser_test, addition_very_long)
{
    cr_assert_str_eq(op_parser("9999999999999999999999999999999987654", "79862319845626989823498562348562318456231", '+'), "79872319845626989823498562348562318443885");
}

Test(op_parser_test, substraction_with_negative_before)
{
    cr_assert_str_eq(op_parser("-56", "12", '-'), "-68");
}

Test(op_parser_test, substraction_very_long)
{
    cr_assert_str_eq(op_parser("9999999999999999999999999999999987654", "79862319845626989823498562348562318456231", '-'), "-79852319845626989823498562348562318468577");
}

Test(op_parser_test, multiplication_with_negative_before)
{
    cr_assert_str_eq(op_parser("-56", "12", '*'), "-672");
}

Test(op_parser_test, help_me_please)
{
    cr_assert_str_eq(op_parser("-5", "5", '+'), "0");
}

Test(op_parser_test, help_me_please_v2)
{
    cr_assert_str_eq(op_parser("5", "5", '-'), "0");
}

Test(op_parser_test, help_me_please_v3)
{
    cr_assert_str_eq(op_parser("5", "-6", '-'), "11");
}

Test(op_parser_test, help_me_please_v4)
{
    cr_assert_str_eq(op_parser("-5", "6", '-'), "-11");
}

Test(op_parser_test, giving_a_wrong_operator)
{
    cr_assert_null(op_parser("23", "123", 'a'));
}

Test(op_parser_test, giving_minus_to_sub_and_s2_longer_than_s1)
{
    cr_assert_str_eq(op_parser("12", "-987", '-'), "999");
}

Test(op_parser_test, giving_minus_to_add_and_s2_smaller_than_s1)
{
    cr_assert_str_eq(op_parser("12", "-987", '+'), "-975");
}

Test(op_parser_test, giving_minus_to_add_and_s1_smaller_than_s2)
{
    cr_assert_str_eq(op_parser("-987", "12", '+'), "-975");
}

Test(op_parser_test, giving_minus_to_add_and_result_is_negative)
{
    cr_assert_str_eq(op_parser("-987", "-1232", '+'), "-2219");
}

Test(op_parser_test, giving_positive_to_add_and_result_is_positive)
{
    cr_assert_str_eq(op_parser("987", "1232", '+'), "2219");
}

Test(op_parser_test, testing_directly_my_sub_exception)
{
    cr_assert_str_eq(my_sub_exception(my_strdup("987"), my_strdup("123")), "864");
}

Test(op_parser_test, testing_both_two_have_minus_but_second_is_smalled_sended_to_add)
{
    cr_assert_str_eq(op_parser("-1456", "-12", '+'), "-1468");
}

Test(op_parser_test, testing_two_zeros_with_minus)
{
    cr_assert_str_eq(op_parser("-0", "-0", '+'), "0");
}

Test(op_parser_test, testing_two_regular_zeros)
{
    cr_assert_str_eq(op_parser("0", "0", '+'), "0");
}

Test(op_parser_test, still_testing_two_regular_zeros_but_with_sub)
{
    cr_assert_str_eq(op_parser("0", "0", '-'), "0");
}

Test(op_parser_test, still_testing_two_minus_zeros_but_with_sub)
{
    cr_assert_str_eq(op_parser("-0", "-0", '-'), "0");
}
/*
Test(op_parser_test, multiplication_very_long)
{
    cr_assert_str_eq(op_parser("9999999999999999999999999999999987654", "79862319845626989823498562348562318456231", '*'), "798623198456269898234985623485622198582109185889183639086749244649616339372074");
}
*/
