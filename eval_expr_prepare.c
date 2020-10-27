/*
** EPITECH PROJECT, 2020
** eval_expr_prepare
** File description:
** prepare_eval
*/

#include <bistromatic.h>
#include <my_numformat.h>
#include <stdlib.h>
#include <my_stdio.h>
#include "./source/evalexpr/eval_expr.h"

char *eval_expr_prepare(char const *base, char const *ops,
                        char const *expr, unsigned int size)
{
    char *transformed_base = transform_to_base_10(expr, base, ops);

    transformed_base = str_cleaner(transformed_base);
    if (!error_check_arithmetic_expression(transformed_base) &&
        !error_check_multiple_definition(ops, base)) {
        my_putstr("error syntax");
        exit(84);
    }
    return (eval_expr(transformed_base));
}
