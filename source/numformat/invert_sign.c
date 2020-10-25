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
    int is_negative = (get_sign(str) == 1);

    str = remove_sign(str);
    if (!is_zero(str) && is_negative) {
        return (my_put_in_str(str, 0, '-'));
    }
    return (str);
}
