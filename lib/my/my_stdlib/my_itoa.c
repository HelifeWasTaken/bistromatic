/*
** EPITECH PROJECT, 2020
** my_itoa
** File description:
** iota
*/
#include <my_str.h>

void my_itoa(int value, char *to_fill, char const *base)
{
    int i = 0;
    int size_base = my_strlen(base);

    if (value < 0)
        value -= value;
    do {
        to_fill[i] = base[value % size_base];
        i++;
        value /= size_base;
    } while (value > 0);
    to_fill[i] = '\0';
    my_revstr(to_fill);
}
