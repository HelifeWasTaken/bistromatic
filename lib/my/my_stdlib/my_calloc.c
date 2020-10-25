/*
** EPITECH PROJECT, 2020
** my_calloc
** File description:
** calloc
*/

#include <stdlib.h>

void *my_memset(void *data, int filler, int size);

void *my_calloc(int nmemb, int size)
{
    void *block_to_malloc = malloc(nmemb * size);

    return (my_memset(block_to_malloc, 0, nmemb * size));
}
