/*
** EPITECH PROJECT, 2020
** my_put_in_str
** File description:
** put_a_char_in_str
*/

#include <my_stdlib.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char *str);

char *my_put_in_str(char *str, int index, char to_add)
{
    int size_to_push = my_strlen(str);
    char *pushed = my_calloc(sizeof(char), size_to_push + 2);

    pushed[size_to_push + 1] = '\0';
    while (size_to_push >= index) {
        pushed[size_to_push + 1] = str[size_to_push];
        size_to_push--;
    }
    pushed[index] = to_add;
    while (size_to_push >= 0) {
        pushed[size_to_push] = str[size_to_push];
        size_to_push--;
    }
    free(str);
    return (pushed);
}
