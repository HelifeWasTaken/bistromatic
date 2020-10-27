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
#include <stdio.h>
#include <my_opp.h>

char *my_get_div(char *s1, char *s2, bool returnMod)
{
    char *dividend = malloc(sizeof(char) * (my_strlen(s1) + 1));
    char *remaining = NULL;
    char *nearest = NULL;

    my_bzero(dividend, sizeof(char) * (my_strlen(s1) + 1));
    do {
        dividend = my_add(my_strdup(dividend), my_strdup("1"));
        nearest = my_mul(my_strdup(s2), my_strdup(dividend));
        remaining = my_sub(my_strdup(s1), my_strdup(nearest));
        //printf("dividend = %s, remaining = %s, nearest = %s\n", dividend, remaining, nearest);
    } while (is_first_smaller("1", remaining));
    if (returnMod) {
        free(dividend);
        return (remaining);
    }
    free(remaining);
    return (dividend);
}

char *my_div(char const *s1, char const *s2)
{
    char *s1_dup = remove_sign(my_strdup(s1));
    char *s2_dup = remove_sign(my_strdup(s2));
    char *answer = NULL;
    int is_negative = (get_global_sign(s1, s2) == '-');

    answer = my_get_div(s1_dup, s2_dup, false);
    if (is_negative)
        answer = invert_sign(answer);
    free(s1_dup);
    free(s2_dup);
    return (answer);
}
