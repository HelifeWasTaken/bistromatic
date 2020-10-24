/*
** EPITECH PROJECT, 2020
** transform_base
** File description:
** base_transformer
*/

#include <stdlib.h>
#include <my_stdlib.h>
#include <my_str.h>

char *transform_to_base_10(char const *raw_str, char const *num_base,
                           char const *op_base)
{
    int j = 0;
    char op[8] = "()+-*/%";
    char *str = my_strdup(raw_str);

    for (int i = 0; raw_str[i]; i++) {
        for (j = 0; num_base[j] && num_base[j] != str[i]; j++);
        if (j < 10) {
            str[i] = j + '0';
        }
        for (j = 0; op_base[j] && op_base[j] != str[i]; j++);
        if (j < 7) {
            str[i] = op[j];
        }
    }
    return (str);
}
