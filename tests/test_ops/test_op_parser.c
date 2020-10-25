/*
** EPITECH PROJECT, 2020
** test_op_parser
** File description:
** tests
*/

#include <criterion/criterion.h>

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
    cr_assert_str_eq(op_parser("-56", "12", '+'), "44");
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
    cr_assert_str_eq(op_parser("5", "-6", '-'), "-1");
}

Test(op_parser_test, help_me_please_v4)
{
    cr_assert_str_eq(op_parser("-5", "6", '-'), "-11");
}

/*
Test(op_parser_test, multiplication_very_long)
{
    cr_assert_str_eq(op_parser("9999999999999999999999999999999987654", "79862319845626989823498562348562318456231", '*'), "798623198456269898234985623485622198582109185889183639086749244649616339372074");
}
*/
