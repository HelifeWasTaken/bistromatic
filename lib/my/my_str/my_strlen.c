/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** get len of a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    if (str) {
        while (str[i] != '\0') {
            i++;
        }
    }
    return (i);
}
