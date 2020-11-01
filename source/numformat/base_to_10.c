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
#include <stdio.h>

static char *get_digit(char const digit, char const *base)
{
    char *digit_str = my_calloc(sizeof(char), 3);
    int i = 0;

    while (base[i] != digit && base[i] != '\0')
        i++;
    my_itoa(i, digit_str, "0123456789");
    return (digit_str);
}

static char *get_baselen_str(int len)
{
    char *base_str = my_calloc(sizeof(char), 20);

    my_itoa(len, base_str, "0123456789");
    return (base_str);
}

char *base_to_10(char const *str, char const *base)
{
    int baselen = my_strlen(base);
    char *baselen_str = get_baselen_str(baselen);
    int len = my_strlen(str);
    char *res = my_calloc(sizeof(char), (len * baselen) / 10 + 2);
    char *digit = NULL;
    char *tmp = NULL;
    int i = 0;

    while (str[i]) {
        digit = get_digit(str[i], base);
        tmp = my_pow_int(my_strdup(baselen_str), len - i - 1);
        res = my_add(res, my_mul(my_strdup(digit), my_strdup(tmp)));
        i++;
    }
    return (res);
}
