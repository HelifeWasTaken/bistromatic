/*
** EPITECH PROJECT, 2020
** remove_sign
** File description:
** sign_remover
*/

#include <my_stdlib.h>
#include <my_str.h>
#include <stdlib.h>
#include <stdio.h>

char *fill_of_zero(char *str, int n)
{
    int size = my_strlen(str);
    char *to_fill = malloc(sizeof(char) * (n + 1));
    int i = 0;

    while (i < size) {
        to_fill[i] = str[i];
        i++;
    }
    while (i < n) {
        to_fill[i] = '0';
        i++;
    }
    to_fill[i] = '\0';
    return (to_fill);
}
