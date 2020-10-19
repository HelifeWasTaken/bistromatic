/*
** EPITECH PROJECT, 2020
** is_a_letter
** File description:
** is_a_letter
*/

int is_capital_letter(char const c);

int is_lowercase_letter(char const c);

int is_an_alpha_letter(char const c)
{
    if (is_capital_letter(c) && is_lowercase_letter(c))
        return (1);
    return (0);
}
