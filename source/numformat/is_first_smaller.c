/*
** EPITECH PROJECT, 2020
** is_first_smaller
** File description:
** get_lowest_number
*/

#include <my_str.h>
#include <stdbool.h>
#include <my_numformat.h>

bool is_first_smaller(char const *s1, char const *s2)
{
    if(get_sign(s1) == 1 && get_sign(s2) == -1)
        return (false);
    if(get_sign(s1) == -1 && get_sign(s2) == 1)
        return (true);

    return (is_first_smaller_unsigned(s1, s2));
}
