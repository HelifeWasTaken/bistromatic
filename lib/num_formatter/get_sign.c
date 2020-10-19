/*
** EPITECH PROJECT, 2020
** get_sign
** File description:
** get_sign
*/

int get_sign(char const *str)
{
    int sign = 1;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '-')
            sign = -sign;
    }
    return (sign);
}