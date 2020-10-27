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

char *my_get_div(char *s1, char *s2, bool returnMod);

char *my_mod(char const *s1, char const *s2)
{
    char *s1_dup = remove_sign(my_strdup(s1));
    char *s2_dup = remove_sign(my_strdup(s2));
    char *answer = NULL;
    int is_negative = (get_global_sign(s1, s2) == '-');

    answer = my_get_div(s1_dup, s2_dup, true);
    if (is_negative)
        answer = invert_sign(answer);
    free(s1_dup);
    free(s2_dup);
    return (answer);
}
