/*
** EPITECH PROJECT, 2020
** base_to_10
** File description:
** converts a base to ten
*/

#include <my_numformat.h>
#include <my_opp.h>
#include <my_stdlib.h>
#include <my_str.h>
#include <stdlib.h>

static int intlen(int nb)
{
    int i = 0;

    while (nb > 0) {
        nb /= 10;
        i++;
    }
    return (i);
}

static char *int_to_str(int nb)
{
    char *res = NULL;
    int i = 0;

    if (nb == 0)
        return (my_strdup("0"));
    res = my_calloc(sizeof(char), intlen(nb) + 1);
    while (nb > 0) {
        res[i] = nb % 10;
        nb /= 10;
        i++;
    }
    return (my_revstr(res));
}

char *base_to_10(char *str, int base)
{
    int len = my_strlen(str);
    char *res = my_calloc(sizeof(char), len * (base / 10) + 1);
    char *digit = my_calloc(sizeof(char), 2);
    char *base_str = int_to_str(base);
    char *tmp = NULL;
    int i = 0;

    while (str[i]) {
        digit[0] = str[i];
        tmp = my_pow_int(my_strdup(base_str), len - i - 1);
        res = my_add(my_strdup(res), my_mul(my_strdup(digit), my_strdup(tmp)));
        i++;
    }
    return (res);
}
