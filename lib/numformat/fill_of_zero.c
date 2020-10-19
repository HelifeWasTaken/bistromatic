/*
** EPITECH PROJECT, 2020
** remove_sign
** File description:
** sign_remover
*/

#include <my_str.h>

char *fill_left_with_zeros(char *s1, char *s2)
{
    char *to_fill = malloc(sizeof(char) * my_strlen(s1) + 1);
    int i;

    my_strcpy(to_fill, s2);
    for (i = my_strlen(s2); i < my_strlen(s1); i++)
        to_fill[i] = '0';
    to_fill[i] = '\0';
    return (to_fill);
}
