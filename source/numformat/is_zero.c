/*
** EPITECH PROJECT, 2020
** is_zero
** File description:
** Source code
*/

#include <stdbool.h>

bool is_zero(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] != '0' && str[i] != '-' && str[i] != '+')
            return (false);
        i++;
    }
    return (true);
}
