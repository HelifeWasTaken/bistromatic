/*
** EPITECH PROJECT, 2020
** invert_sign
** File description:
** Source code
*/

#include <my_numformat.h>
#include <my_str.h>

char *invert_sign(char *str)
{
    str = remove_sign(str);
    if (!is_zero(str) && get_sign(str) == -1) {
        return (my_put_in_str(str, 0, '-'));
    }
    return (str);
}