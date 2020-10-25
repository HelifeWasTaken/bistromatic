/*
** EPITECH PROJECT, 2020
** is_a_letter
** File description:
** is_a_letter
*/

#include <stdbool.h>

bool is_capital_letter(char const c);

bool is_lowercase_letter(char const c);

bool is_an_alpha_letter(char const c)
{
    return (is_capital_letter(c) && is_lowercase_letter(c));
}
