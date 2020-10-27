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

bool is_first_smaller(char const *s1, char const *s2)
{
    char *s1_dup = NULL;
    char *s2_dup = NULL;
    bool temp_result = false;

    if (get_sign(s1) == -1 && get_sign(s2) == -1) {
        s1_dup = invert_sign(my_strdup(s1));
        s2_dup = invert_sign(my_strdup(s2));
        temp_result = is_first_greater(s1_dup, s2_dup);
        free(s1_dup);
        free(s2_dup);
        return (temp_result);
    }
    if (get_sign(s1) == -1)
        return (true);
    if (get_sign(s2) == -1)
        return (false);
    return (is_first_smaller_unsigned(s1, s2));
}
