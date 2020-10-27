/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** copy and allocate memory for a string
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

void my_bzero(void *data, int size);

char *my_strdup(char const *str)
{
    char *array_to_return = malloc(sizeof(char) * (my_strlen(str) + 1));

    my_bzero(array_to_return, my_strlen(str) + 1);
    my_strcpy(array_to_return, str);
    return (array_to_return);
}
