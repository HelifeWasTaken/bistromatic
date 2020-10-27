/*
** EPITECH PROJECT, 2020
** are_equals
** File description:
** Source code
*/

#include <my_str.h>
#include <my_stdlib.h>
#include <stdlib.h>
#include <stdbool.h>
#include <my_numformat.h>

bool are_equals(char const *s1, char const *s2)
{
    char *s1_dup = NULL;
    char *s2_dup = NULL;
    bool result = false;

    if (get_sign(s1) != get_sign(s2))
        return (false);
    s1_dup = remove_sign(my_strdup(s1));
    s2_dup = remove_sign(my_strdup(s2));
    s1_dup = remove_leading_zeroes(s1_dup);
    s2_dup = remove_leading_zeroes(s2_dup);
    result = (my_strcmp(s1_dup, s2_dup) == 0);
    free(s1_dup);
    free(s2_dup);
    return (result);
}
