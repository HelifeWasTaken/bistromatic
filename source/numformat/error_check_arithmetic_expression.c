/*
** EPITECH PROJECT, 2020
** error_check
** File description:
** check_for_errors
*/

#include <my_str.h>
#include <stdlib.h>
#include <my_stdlib.h>
#include <my_numformat.h>
#include <stdbool.h>

static bool check_for_authorize_char(char c)
{
    char const authorized_chars[7] = { '+', '-', '/', '*', '%', '(', ')' };
    int i = 0;

    while (i < 7) {
        if (authorized_chars[i] == c)
            return (true);
        i++;
    }
    return (false);
}

bool check_str_validity(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!is_num_letter(str[i]) && !check_for_authorize_char(str[i]))
            return (false);
        i++;
    }
    return (true);
}

bool check_nb_parentheses(char const *str)
{
    int count_open_parantheses = 0;
    int count_close_parantheses = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] == '(')
            count_open_parantheses++;
        else if (str[i] == ')')
            count_close_parantheses++;
        i++;
    }
    return (count_open_parantheses == count_close_parantheses);
}

bool error_check_arithmetic_expression(char const *str)
{
    char *str_clean = str_cleaner(my_strdup(str));

    if (!check_str_validity(str_clean) || !check_nb_parentheses(str_clean) ||
            !check_arithmetic_logic(str_clean)) {
        free(str_clean);
        return (false);
    }
    free(str_clean);
    return (true);
}
