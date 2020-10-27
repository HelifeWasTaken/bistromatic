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

char *my_get_div(char *s1, char *s2, bool returnMod)
{
    char *dividend = malloc(sizeof(char) * (my_strlen(s1) + 1));
    char *nearest = my_strdup("0");
    char *remaining = NULL;
    char *safe_dup = NULL;

    if (is_zero(s2)) {
        my_putstr("syntax error");
        exit(EXIT_DIV_ZERO);
    }
    my_bzero(dividend, sizeof(char) * (my_strlen(s1) + 1));
    do {
        dividend = my_add(my_strdup(dividend), my_strdup("1"));
        nearest = my_add(my_strdup(nearest), my_strdup(s2));
        safe_dup = my_strdup(s1);
        remaining = my_sub(my_strdup(safe_dup), my_strdup(nearest));
        free(safe_dup);
    } while (is_first_smaller(s2, remaining) || are_equals(s2, remaining));
    free(s1);
    free(s2);
    return (free_results_and_get_it(returnMod, remaining, dividend));
}

char *my_div(char *s1, char *s2)
{
    int is_negative = (get_global_sign(s1, s2) == '-');
    char *s1_cp = remove_sign(s1);
    char *s2_cp = remove_sign(s2);
    char *answer = NULL;

    if (is_first_smaller(s1, s2))
        return (my_strdup("0"));
    answer = my_get_div(my_strdup(s1_cp), my_strdup(s2_cp), false);
    if (is_negative)
        answer = invert_sign(answer);
    free(s1);
    free(s2);
    return (answer);
}
