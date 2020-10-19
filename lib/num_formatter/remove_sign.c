/*
** EPITECH PROJECT, 2020
** remove_sign
** File description:
** sign_remover
*/

char *remove_sign(char *str)
{
    int i = 0;

    while (str[i] == '+' || str[i] == '-')
        i++;
    return (str + i);
}