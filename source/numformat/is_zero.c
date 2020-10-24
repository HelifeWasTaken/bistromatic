/*
** EPITECH PROJECT, 2020
** is_zero
** File description:
** Source code
*/

int is_zero(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != '0')
            return (0);
        i++;
    }
    return (1);
}
