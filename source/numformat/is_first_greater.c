/*
** EPITECH PROJECT, 2020
** is_first_smaller
** File description:
** get_lowest_number
*/

#include <my_str.h>
#include <my_stdlib.h>
#include <stdlib.h>
#include <stdbool.h>
#include <my_numformat.h>

bool is_first_greater(char const *s1, char const *s2)
{
    char *s1_dup = NULL;
    char *s2_dup = NULL;

    if (get_sign(s1) == -1 && get_sign(s2) == 1)
        return (false);
    if (get_sign(s1) == 1 && get_sign(s2) == -1)
        return (true);
    if (get_sign(s1) == -1 && get_sign(s2) == -1) {
        s1_dup = invert_sign(my_strdup(s1));
        s2_dup = invert_sign(my_strdup(s2));
        return (is_first_smaller(s1_dup, s2_dup));
    }
    return (is_first_greater_unsigned(s1, s2));
}
