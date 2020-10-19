/*
** EPITECH PROJECT, 2020
** my_bzero
** File description:
** recreating_bzero
*/

#include <stdlib.h>

void *my_memset(void *data, int filler, int size);

void my_bzero(void *data, int size)
{
    my_memset(data, '\0', size);
}
