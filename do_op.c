/*
** EPITECH PROJECT, 2020
** do_op.c
** File description:
** do_operations
*/

#include <my_opp.h>
#include <my_stdlib.h>

int op_parser(char *s1, char *s2, char operator)
{
    for (int i = 0; array_ops[i].calculation_process != 0; i++) {
        if (array_ops[i].operation == operator) {
            calc_func = array_ops[i].calculation_process;
            calc_func(s1, s2);
        }
    }
    return (0);
}
