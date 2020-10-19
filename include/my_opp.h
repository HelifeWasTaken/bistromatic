/*
** EPITECH PROJECT, 2020
** my_opp
** File description:
** opp_desc
*/

#ifndef OPP_H
#define OPP_H

char *my_add(char *str1, char *str2);
char *my_sub(char *str1, char *str2);
int op_parser(char *str1, char *str2, char sign);
char my_get_sign(char *str1, char *str2);

struct operator_linker {
    char operation;
    char *(*calculation_process)(char *, char *);
};

char *(*calc_func)(char *, char *);

const struct operator_linker array_ops[] = {
    {'+', &my_add},
    {'-', &my_sub},
    {'\0', 0}
};

#endif
