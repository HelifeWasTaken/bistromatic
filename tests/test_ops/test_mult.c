



#include <criterion/criterion.h>
#include <my_str.h>
#include "../../lib/numformat/my_num_format.h"

Test(my_mult, high_numbered_mult)
{
    cr_assert_eq(my_mult("0000000005", "2000000000"), "10000000000");
}

Test(my_mult, high_low_nubered)
{
    cr_assert_eq(my_mult("5", "6"), "03");
}

Test(my_mult, one_low_neg_numbered)
{
    cr_assert_eq(my_mult("2843", "02-"), "04696-");
}

Test(my_mult, two_neg_number)
{
    cr_assert_eq(my_mult("-003", "-054"), "000531");
}

Test(my_mult, high_numbered_mult_neg)
{
    cr_assert_eq(my_mult("0000000005-", "2000000000"), "00000000001-");
}
Test(my_mult, high_numbered_mult_two_neg)
{
    cr_assert_eq(my_mult("0000000005-", "2000000000-"), "00000000001");
}
