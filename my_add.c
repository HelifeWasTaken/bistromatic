/*
** EPITECH PROJECT, 2020
** do_op_calculations.c
** File description:
** calculation functions
*/

#include <my_str.h>
#include <stdlib.h>

static char compute_add(int a, int b, int *remain)
{
    int temp = a + b + *remain;

    if (temp >= 10) {
        *remain = 1;
        temp -= 10;
    } else {
        *remain = 0;
    }
    return (temp + '0');
}

char *my_add(char *s1, char *s2)
{
    char *ans = malloc(sizeof(char) * my_strlen(s2) + 2);
    int i = 0;
    int remain = 0;


    ans[my_strlen(s2) + 2] = '\0';
    while (s2[i]) {
        ans[i] = compute_add(s1[i] - '0', s2[i] - '0', &remain);
        i++;
    }
    if (remain)
        ans[i] = compute_add(0, 0, &remain);
    return (my_revstr(ans));
}