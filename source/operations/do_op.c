/*
** EPITECH PROJECT, 2020
** do_op.c
** File description:
** do_operations
*/

#include <my_opp.h>
#include <my_stdlib.h>
#include <stdio.h>
#include <my_stdio.h>

char *op_parser(char *s1, char *s2, char operator)
{
    const struct operator_linker array_ops[] = { {'+', &my_add}, {'-', &my_sub},
    {'*', &my_mul}, {'\0', 0} };
    char *(*calc_func)(char *, char *);

    for (int i = 0; array_ops[i].calculation_process != 0; i++) {
        if (array_ops[i].operation == operator) {
            calc_func = array_ops[i].calculation_process;
            return (calc_func(my_strdup(s1), my_strdup(s2)));
        }
    }
    return ((void *)0);
}
