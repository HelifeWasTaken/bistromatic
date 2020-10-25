/*
** EPITECH PROJECT, 2020
** my_memset.c
** File description:
** implement_memset
*/

void *my_memset(void *data, int filler, int size)
{
    unsigned char *pointer_filler = (unsigned char *)data;

    if (!data)
        return ((void *)0);
    while (size) {
        *pointer_filler = filler;
        pointer_filler++;
        size--;
    }
    return (data);
}
