/*
** EPITECH PROJECT, 2020
** do_op.c
** File description:
** do_operations
*/

#include <my_opp.h>
#include <my_stdlib.h>

int op_parser(char *s1, char *s2, char sign)
{
    for (int i = 0; array_ops[i].calculation_process != 0; i++) {
        if (array_ops[i].operation == sign) {
            calc_func = array_ops[i].calculation_process;
            calc_func(my_revstr(my_strdup(s1)), my_revstr(my_strdup(s2));
        }
    }
    return (0);
}