/*
** EPITECH PROJECT, 2020
** remove_leading_zeroes
** File description:
** Source code
*/

#include <my_str.h>
#include <my_numformat.h>

char *remove_leading_zeroes(char *str)
{
    int i = 0;

    while (str[i] == '0') {
        str[i] = '\0';
        i--;
    }
    if (str[0] == '\0') {
        str[0] = '0';
        str[1] = '\0';
    }
    return (str);
}