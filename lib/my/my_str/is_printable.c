/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** detect if a strin only alphanumerics
*/

#include <stdbool.h>

bool is_printable(char const c)
{
    return (c >= 32 && c <= 126);
}
