/*
** EPITECH PROJECT, 2020
** transform_base
** File description:
** base_transformer
*/

#include <stdlib.h>
#include <my_stdlib.h>
#include <my_str.h>
#include <my_stdio.h>
#include <my_numformat.h>
#include <my_opp.h>

static void process_number(char const *nb, char const *base_size,
        char const *base)
{
    if (GREATER_OR_EQUAL(nb, base_size)) {
        process_number(my_div(my_strdup(nb), my_strdup(base_size)),
                base_size, base);
        my_putchar(base[
                my_getnbr(my_mod(my_strdup(nb), my_strdup(base_size)))]);
    } else
        my_putchar(base[my_getnbr(nb)]);
}

void back_to_base(char const *nb, char const *base, char const minus_sign)
{
    char *base_size = my_calloc(sizeof(char), 5);

    my_itoa(my_strlen(base), base_size, "0123456789");
    if (GREATER_OR_EQUAL("-1", nb)) {
        nb = invert_sign(my_strdup(nb));
        my_putchar(minus_sign);
    }
    process_number(nb, base_size, base);
    free(base_size);
}
