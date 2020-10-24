/*
** EPITECH PROJECT, 2020
** putnbr_base
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_math.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(putnbr_base, test_simple_base, .init=redirect_all_stdout)
{
    my_putnbr_base(8, "0123456789");
    cr_assert_stdout_eq_str("8");
}

Test(putnbr_base, test_hex_base, .init=redirect_all_stdout)
{
    my_putnbr_base(3665, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("E51");
}

Test(putnbr_base, test_binary, .init=redirect_all_stdout)
{
    my_putnbr_base(8098, "01");
    cr_assert_stdout_eq_str("1111110100010");
}

Test(putnbr_base, test_weird_base, .init=redirect_all_stdout)
{
    my_putnbr_base(66, "OA@!;ie& ]");
    cr_assert_stdout_eq_str("ee");
}

Test(putnbr_base, test_weird_base_hardcore, .init=redirect_all_stdout)
{
    my_putnbr_base(1204621, "azertyuiopqsdfgh");
    cr_assert_stdout_eq_str("zeuzof");
}
