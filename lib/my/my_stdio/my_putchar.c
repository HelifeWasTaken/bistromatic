/*
** EPITECH PROJECT, 2020
** my_putchar_program
** File description:
** put a char
*/

#include <unistd.h>

void my_putchar(const char c)
{
    write(1, &c, 1);
}
