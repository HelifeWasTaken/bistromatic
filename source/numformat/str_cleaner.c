/*
** EPITECH PROJECT, 2020
** clean_a_string
** File description:
** ys
*/

#include <stdlib.h>
#include <my_stdlib.h>
#include <my_str.h>
#include <my_stdio.h>

static char get_sign(char const *str, int *i)
{
    int sign = 1;

    while (str[*i] == '+' || str[*i] == '-') {
        if (str[*i] == '-') {
            sign = -sign;
        }
        (*i)++;
    }
    if (sign == 1)
        return ('+');
    return ('-');
}

static char get_next_operator(char const *raw_str, int *i_raw)
{
    char const high_level_operators[5] = { '/', '*', '%', '(', ')' };

    if (raw_str[*i_raw] == '-' || raw_str[*i_raw] == '+')
        return (get_sign(raw_str, i_raw));
    for (int i = 0; 1; i++) {
        if (raw_str[*i_raw] == high_level_operators[i]) {
            (*i_raw)++;
            return (high_level_operators[i]);
        }
    }
    return ('a');
}

static char *remove_useless_plus(char *str)
{
    int i_str = 0;
    int i_answer = 0;
    char *answer = my_calloc(sizeof(char), my_strlen(str) + 1);

    while (str[i_str]) {
        if (!(str[i_str] == '+' && !is_num_letter(str[i_str - 1]) &&
                    !(str[i_str - 1] == ')'))) {
            answer[i_answer] = str[i_str];
            i_answer++;
        }
        i_str++;
    }
    free(str);
    return (answer);
}

char *str_cleaner(char *raw_str)
{
    int i_clean_str = 0;
    int i_raw_str = 0;
    char *clean_str = malloc(sizeof(char) * (my_strlen(raw_str) + 1));

    my_bzero(clean_str, my_strlen(raw_str) + 1);
    while (raw_str[i_raw_str]) {
        if (is_num_letter(raw_str[i_raw_str])) {
            clean_str[i_clean_str] = raw_str[i_raw_str];
            i_raw_str++;
        } else {
            clean_str[i_clean_str] = get_next_operator(raw_str, &i_raw_str);
        }
        i_clean_str++;
    }
    free(raw_str);
    return (remove_useless_plus(clean_str));
}
