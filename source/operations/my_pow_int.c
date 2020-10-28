/*
** EPITECH PROJECT, 2020
** my_pow
** File description:
** sign_remover
*/

#include <stdlib.h>
#include <my_stdlib.h>
#include <my_str.h>
#include <my_opp.h>

char *my_pow_int(char *str, int count)
{
    char *res = NULL;

    if (count == 0)
        return my_strdup("1");
    res = my_mul(my_strdup(str), my_pow_int(str, count - 1));
    free(res);
    return (res);
}
