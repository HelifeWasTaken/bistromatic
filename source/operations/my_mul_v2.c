/*
** EPITECH PROJECT, 2020
** do_op_calculations.c
** File description:
** calculation functions
*/

#include <my_str.h>
#include <stdlib.h>
#include <my_numformat.h>
#include <my_stdlib.h>
#include <stdio.h>
#include <my_opp.h>

char *mul_digits(char c1, char c2) {
    char *result = malloc(sizeof(char) * 3);
    char *s1 = my_strdup(&c1);

    my_bzero(result, sizeof(char) * 3);
    int remaining = c2 - '0';
    while (remaining > 0) {
        result = my_add(result, s1);
        remaining--;
    }
    free(s1);
    return (result);
}

char *my_mul_compute(char *s1, char *s2)
{
    int s1_len = my_strlen(s1);
    int s2_len = my_strlen(s2);
    char *result = malloc(sizeof(char) * (s1_len + s2_len + 1));
    char *tmp = NULL;

    my_bzero(result, s1_len + s2_len + 1);
    for (int i = 0; i < s1_len; i++) {
        for (int j = 0; j < s2_len; j++) {
            tmp = mul_digits(s1[s1_len - i - 1], s2[s2_len - j - 1]);
            tmp = powten(tmp, i + j);
            result = my_add(result, tmp);
        }
    }
    return (result);
}

char *my_mul(char *s1, char *s2)
{
    char *answer = NULL;
    int is_negative = (get_global_sign(s1, s2) == '-');

    s1 = remove_sign(s1);
    s2 = remove_sign(s2);
    answer = my_mul_compute(s1, s2);
    if (is_negative)
        answer = my_put_in_str(answer, 0, '-');
    return (answer);
}