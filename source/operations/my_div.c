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

char *my_get_div(char *s1, char *s2) {
    char *dividend = malloc(sizeof(char) * (my_strlen(s1) + 1));
    char *remaining = malloc(sizeof(char) * (my_strlen(s1) + 1));
    char *nearest = NULL;

    my_bzero(dividend, sizeof(char) * (my_strlen(s1) + 1));
    my_bzero(remaining, sizeof(char) * (my_strlen(s1) + 1));
    do {
        dividend = my_add(dividend, "1");
        nearest = my_mul(s2, dividend);
        remaining = my_sub(s1, nearest);
        printf("dividend = %s, remaining = %s, mult = %s\n", dividend, remaining, my_mul(s2, dividend));
    } while(is_first_smaller(s2, remaining));
    free(remaining);
    return (dividend);
}

char *my_div(char *s1, char *s2)
{
    char *answer = NULL;
    int is_negative = (get_global_sign(s1, s2) == '-');

    s1 = remove_sign(s1);
    s2 = remove_sign(s2);
    answer = my_get_div(s1, s2);
    if (is_negative)
        answer = my_put_in_str(answer, 0, '-');
    return (answer);
}

//int main(void) {
//    printf("%s", my_div(my_strdup("50"), my_strdup("3")));
//    return (0);
//}