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

char *my_get_div(char *s1, char *s2, bool returnMod);

char *my_mod(char *s1, char *s2)
{
    char *answer = NULL;
    int is_negative = (get_sign(s1) == -1);

    s1 = remove_sign(s1);
    s2 = remove_sign(s2);
    if (is_first_smaller_unsigned(s1, s2)) {
        free(s2);
        if (is_negative)
            return (invert_sign(s1));
        return (s1);
    }
    answer = my_get_div(my_strdup(s1), my_strdup(s2), true);
    if (is_negative)
        answer = invert_sign(answer);
    free(s1);
    free(s2);
    return (answer);
}
