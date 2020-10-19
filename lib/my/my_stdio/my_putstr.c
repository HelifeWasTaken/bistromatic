/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** Rewrite puts function
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
