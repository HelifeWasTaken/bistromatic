/*
** EPITECH PROJECT, 2020
** do_op_calculations.c
** File description:
** calculation functions
*/

#include <my_str.h>
#include <stdlib.h>
#include <my_numformat.h>
#include <my_stdlib.h>
#include <my_opp.h>
#include <my_stdio.h>
#include <bistromatic.h>

char *free_results_and_get_it(bool returnMod, char *remaining, char *dividend)
{
    if (returnMod) {
        free(dividend);
        return (remaining);
    }
    free(remaining);
    return (dividend);
}

char *euclide_algorithm(char *s1, char *s2, bool returnMod)
{
    char *remain = my_strdup(s1);
    char *quotient = my_strdup("0");
    char *tenshift = my_strdup("1");
    char *aux = NULL;

    while (GREATER_OR_EQUAL(remain, s2)) {
        while (SMALLER_OR_EQUAL(my_mul(my_strdup(s2), my_strdup(tenshift)), s1))
            tenshift = powten(my_strdup(tenshift), 1);
        tenshift = powten(my_strdup(tenshift), -1);
        aux = my_mul(my_strdup(s2), my_strdup(tenshift));
        while (GREATER_OR_EQUAL(remain, aux)) {
            remain = my_sub(my_strdup(remain), my_strdup(aux));
            quotient = my_add(my_strdup(quotient), my_strdup(tenshift));
        }
        free(s1);
        s1 = remain;
        tenshift = my_strdup("1");
    }
    return (free_results_and_get_it(returnMod, remain, quotient));
}

char *my_get_div(char *s1, char *s2, bool returnMod)
{
    if (is_zero(s2)) {
        my_putstr("syntax error");
        exit(EXIT_DIV_ZERO);
    }
    return (euclide_algorithm(s1, s2, returnMod));
}

char *my_div(char *s1, char *s2)
{
    int is_negative = (get_global_sign(s1, s2) == '-');
    char *s1_cp = remove_sign(s1);
    char *s2_cp = remove_sign(s2);
    char *answer = NULL;

    if (is_first_smaller(s1, s2))
        return ("0");
    answer = my_get_div(my_strdup(s1_cp), my_strdup(s2_cp), false);
    if (is_negative)
        answer = invert_sign(answer);
    free(s1);
    free(s2);
    return (answer);
}
