/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <my.h>

int op_parser(char *str1, char *str2, char sign);

char my_get_sign(char *, char *);

static int my_str_is_valid(char *str)
{
    int i = 0;

    while (str[i]) {
        if (!is_num_letter(str[i]) && str[i] != '+' && str[i] != '-')
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc < 3 || argc > 3 || argv[1][0] == '\0' || argv[2][0] == '\0')
        return (0);

    if (my_str_is_valid(argv[1]) && my_str_is_valid(argv[2]))
        return (op_parser(argv[1], argv[2], my_get_sign(argv[1], argv[2])));
}
