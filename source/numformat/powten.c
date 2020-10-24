/*
** EPITECH PROJECT, 2020
** remove_sign
** File description:
** sign_remover
*/

#include <my_stdlib.h>
#include <my_str.h>
#include <stdlib.h>
#include <stdio.h>

static char *pop_tens(char *str, int count)
{
    int size = my_strlen(str);
    char *newstr = malloc(sizeof(char) * (size + 1));
    int i = 0;

    while (str[i] != '\0') {
        newstr[i] = str[i];
        i++;
    }
    i--;
    while (count > 0) {
        newstr[i] = '\0';
        i--;
        count--;
    }
    return (newstr);
}

char *push_tens(char *str, int count)
{
    int size = my_strlen(str);
    char *newstr = malloc(sizeof(char) * (size + count + 1));
    int i = 0;

    while (str[i] != '\0') {
        newstr[i] = str[i];
        i++;
    }
    while (count > 0) {
        newstr[i] = '0';
        i++;
        count--;
    }
    newstr[i] = '\0';
    return (newstr);
}

char *powten(char *str, int count)
{
    if (count == 0)
        return (str);
    if (count < 0)
        return (pop_tens(str, -count));
    return (push_tens(str, count));
}
