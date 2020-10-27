/*
** EPITECH PROJECT, 2020
** remove_sign
** File description:
** sign_remover
*/

#include <my_stdlib.h>
#include <my_str.h>
#include <stdlib.h>

char *fill_of_zero(char *str, int n)
{
    int size = my_strlen(str);
    char *to_fill = malloc(sizeof(char) * (n + 1));
    int fill_size = n - size;
    int i = 0;
    int j = 0;

    while (i < fill_size) {
        to_fill[i] = '0';
        i++;
    }
    while (j < size) {
        to_fill[i] = str[j];
        i++;
        j++;
    }
    to_fill[i] = '\0';
    free(str);
    return (to_fill);
}
