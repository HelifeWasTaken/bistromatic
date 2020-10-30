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
    char *res = my_strdup("1");

    while (count > 0) {
        res = my_mul(res, my_strdup(str));
        count--;
    }
    free(str);
    return (res);
}
