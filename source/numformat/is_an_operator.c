/*
** EPITECH PROJECT, 2020
** is_an_operator
** File description:
** operator_basic_check
*/

#include <stdbool.h>

bool is_an_operator(char c)
{
    char const operators[5] = { '+', '-', '/', '*', '%' };
    int i = 0;

    while (i < 5) {
        if (c == operators[i])
            return (true);
        i++;
    }
    return (false);
}
