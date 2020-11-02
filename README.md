# MYBC - Bistromatic

This project has been made with only write, malloc, and exit from the libC everything else has been implemented by hand

- arithmetic expression such as: 5 6 + 2 is considered as 56+2
- You can change change base by typing : `base: 01` for example (default base is 10)
- You cannot add operands to the base
- You cannot put the same two numbers in the base

## Using it

```sh
git clone https://github.com/Heliferepo/bistromatic
cd bistromatic
make
echo "expression" | ./calc "base" "operators" size_to_echo

echo "3+3" | ./calc "0123456789" "()+-*/%" 3 #should output 6
```

This was an epitech project the results were :

| note       | 100% lines    |
|------------|---------------|
| coverage   | 100%          |
| percentage | 100% branches |

- Coding style 

| Minor | 0 |
|-------|---|
| Major | 0 |
| Info  | 0 |

237 units tests has been realised with criterion

Technically we can say the project had a perfect score except some minor leaks :(

```
------------------------------------------------------------------------------
                           GCC Code Coverage Report
Directory: .
------------------------------------------------------------------------------
File                                    Branches   Taken  Cover   Missing
------------------------------------------------------------------------------
eval_expr_prepare.c                           10      10   100%
source/evalexpr/eval_expr.c                    0       0    --%
source/evalexpr/expr.c                        14      14   100%
source/evalexpr/parser.c                      14      14   100%
source/evalexpr/parser_brackets.c             16      16   100%
source/evalexpr/tokens.c                      12      12   100%
source/numformat/are_equals.c                  2       2   100%
source/numformat/back_to_base.c                4       4   100%
source/numformat/base_to_10.c                  8       8   100%
source/numformat/check_arithmetic_expression.c
                                              22      22   100%
source/numformat/check_arithmetic_logic.c
                                              20      20   100%
source/numformat/check_multiple_definition.c
                                              24      24   100%
source/numformat/fill_of_zero.c                4       4   100%
source/numformat/get_global_sign.c             8       8   100%
source/numformat/get_new_base.c               14      14   100%
source/numformat/get_sign.c                    4       4   100%
source/numformat/invert_sign.c                 4       4   100%
source/numformat/is_an_operator.c              4       4   100%
source/numformat/is_first_greater.c            8       8   100%
source/numformat/is_first_greater_unsigned.c
                                               6       6   100%
source/numformat/is_first_smaller.c            8       8   100%
source/numformat/is_first_smaller_unsigned.c
                                               6       6   100%
source/numformat/is_zero.c                     8       8   100%
source/numformat/powten.c                     12      12   100%
source/numformat/remove_leading_zeroes.c       4       4   100%
source/numformat/remove_sign.c                 8       8   100%
source/numformat/remove_trailing_zeroes.c
                                               4       4   100%
source/numformat/str_cleaner.c                26      26   100%
source/numformat/transform_base.c             14      14   100%
source/operations/do_op.c                      4       4   100%
source/operations/my_add.c                    16      16   100%
source/operations/my_div.c                    14      14   100%
source/operations/my_mod.c                     6       6   100%
source/operations/my_mul.c                     8       8   100%
source/operations/my_pow_int.c                 2       2   100%
source/operations/my_sub.c                    14      14   100%
------------------------------------------------------------------------------
TOTAL                                        352     352   100%
------------------------------------------------------------------------------

[====] Synthesis: Tested: 237 | Passing: 237 | Failing: 0 | Crashing: 0
```

Beware the -42
