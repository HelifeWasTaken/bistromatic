/*
** EPITECH PROJECT, 2020
** is_an_operator
** File description:
** operator_basic_check
*/

int is_an_operator(char c)
{
    char const operators[5] = { '+', '-', '/', '*', '%' };
    int i = 0;

    while (i < 5) {
        if (c == operators[i])
            return (1);
        i++;
    }
    return (0);
}
