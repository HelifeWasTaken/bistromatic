/*
** EPITECH PROJECT, 2020
** remove_leading_zeroes
** File description:
** Source code
*/

#include <my_str.h>
#include <my_numformat.h>
#include <stdlib.h>
#include <my_stdlib.h>

char *remove_leading_zeroes(char *str)
{
    int i = 0;
    char *answer = malloc(sizeof(char) * (my_strlen(str + 1)));

    my_bzero(answer, my_strlen(str + 1));
    while (str[i] == '0')
        i++;
    if (str[i] != '\0') {
        my_strcat(answer, str + i);
    } else {
        answer[0] = '0';
        answer[1] = '\0';
    }
    return (answer);
}
