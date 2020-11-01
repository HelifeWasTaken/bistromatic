/*
** EPITECH PROJECT, 2020
** get_new_base
** File description:
** get_base
*/

#include <stdbool.h>
#include <my_stdlib.h>
#include <my_str.h>
#include <stdlib.h>
#include <my_numformat.h>

static bool check_op(char const c, char const *op)
{
    for (int i = 0; op[i]; i++) {
        if (op[i] == c)
            return (true);
    }
    return (false);
}

static char *get_op(char const c, char const *op)
{
    char *temp = my_calloc(sizeof(char), 2);
    char const normal_op[6] = { '(', ')', '+', '-', '/', '%' };
    int i = 0;

    for (i = 0; 1; i++) {
        if (c == op[i]) {
            temp[0] = normal_op[i];
            return (temp);
        }
    }
}

char *get_next_nb(char const **str, char const *op, char const *base)
{
    char *new_str = NULL;
    int i = 0;

    while (str[0][i] && !check_op(str[0][i], op))
        i++;
    new_str = my_calloc(sizeof(char), i + 1);
    my_strncpy(new_str, *str, i);
    new_str = base_to_10(new_str, base);
    *str = *str + i;
    return (new_str);
}

char *get_new_base(char const *str, char const *op, char const *base)
{
    char *new_str = my_calloc(sizeof(char), my_strlen(str) * 5);
    char *temp = NULL;

    while (*str) {
        if (check_op(*str, op)) {
            temp = get_op(*str, op);
            my_strncat(new_str, temp, 1);
            free(temp);
            str++;
        } else {
            temp = get_next_nb(&str, op, base);
            my_strcat(new_str, temp);
            free(temp);
        }
    }
    return (new_str);
}
