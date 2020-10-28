/*
** EPITECH PROJECT, 2020
** transform_base
** File description:
** base_transformer
*/

#include <stdlib.h>
#include <my_stdlib.h>
#include <my_str.h>

char *back_to_base(char const *raw_str, char const *num_base, char const *ops)
{
    char *str = my_strdup(raw_str);

    for (int i = 0; raw_str[i]; i++) {
        if (raw_str[i] != '-')
            str[i] = num_base[str[i] - '0'];
        else
            str[i] = ops[3];
    }
    return (str);
}
