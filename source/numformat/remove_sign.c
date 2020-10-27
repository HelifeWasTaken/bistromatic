/*
** EPITECH PROJECT, 2020
** remove_sign
** File description:
** sign_remover
*/
#include <my_str.h>
#include <my_stdlib.h>
#include <stdlib.h>

char *remove_sign(char *str)
{
    int len = my_strlen(str);
    int offset = 0;
    int i = 0;

    while (str[offset] == '+' || str[offset] == '-')
        offset++;
    while (str[offset + i] != '\0') {
        str[i] = str[offset + i];
        i++;
    }
    while (i < len) {
        str[i] = '\0';
        i++;
    }
    return (str);
}
