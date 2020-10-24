/*
** EPITECH PROJECT, 2020
** transform_base
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <my_numformat.h>

Test(transform_to_base_10, given_example_1_bistro_pdf)
{
    cr_assert_str_eq(transform_to_base_10("3+6", "0123456789", "()+-*/%"), "3+6");
}

Test(transform_to_base_10, given_example_2_bistro_pdf)
{
    cr_assert_str_eq(transform_to_base_10("3v6", "0123456789", "{}vwxyz"), "3+6");
}

Test(transform_to_base_10, from_base_ten_to_base_ten_with_normal_signs_longer_version)
{
    cr_assert_str_eq(transform_to_base_10("-789+(123*278/54--56)",
                                          "0123456789", "()+-*/%"), "-789+(123*278/54--56)");
}

Test(transform_to_base_10, given_example_3_bistro_pdf)
{
    cr_assert_str_eq(transform_to_base_10("-(e@-(;*!@))", "OA@!;ie& ]", "()+-*/%"), "-(62-(4*32))");
}

Test(transform_to_base_10, given_example_3_bistro_pdf_but_with_modified_operators)
{
    cr_assert_str_eq(transform_to_base_10("zu&@zu;r!@oo", "OA@!;ie& ]", "uo+zr/%"),
                     "-(72-(4*32))");
}
