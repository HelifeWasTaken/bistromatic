/*
** EPITECH PROJECT, 2020
** check_arithmetic_logic
** File description:
** is_it_logic
*/

#include <my_str.h>

int is_an_operator(char const c);

static int check_for_not_logic_operators(char const b)
{
    char const is_not_logic[4] = { '/', '*', '%', '\0' };
    int i = 0;

    while (i < 7) {
        if (b == is_not_logic[i])
            return (0);
        i++;
    }
    return (1);
}

static int check_logic_between_current_and_next(char const a, char const b)
{
    if (is_num_letter(a))
        return (b != '(');
    if (a == '(')
        return (1);
    if (a == ')')
        return (b == ')' || is_an_operator(b) || b == '\0');
    return (check_for_not_logic_operators(b));
}

int check_arithmetic_logic(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!check_logic_between_current_and_next(str[i], str[i + 1]))
            return (0);
        i++;
    }
    return (1);
}
