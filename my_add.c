/*
** EPITECH PROJECT, 2020
** do_op_calculations.c
** File description:
** calculation functions
*/

#include <my_str.h>
#include <stdlib.h>
#include <my_numformat.h>

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

static char *my_get_add(char *s1_rev, char *s2_rev)
{
    char *ans = malloc(sizeof(char) * my_strlen(s2_rev) + 2);
    int i = 0;
    int remain = 0;

    ans[my_strlen(s2_rev) + 2] = '\0';
    while (s2_rev[i]) {
        ans[i] = compute_add(s1_rev[i] - '0', s2_rev[i] - '0', &remain);
        i++;
    }
    if (remain)
        ans[i] = compute_add(0, 0, &remain);
    return (my_revstr(ans));
}

char *my_add(char *s1, char *s2)
{
    if (my_strlen(s1) != my_strlen(s2)) {
        if (my_strlen(s1) > my_strlen(s2))
            s2 = fill_of_zero(s1, s2);
        else
            s1 = fill_of_zero(s1, s1);
    }
    return ((my_get_add(my_revstr(s1), my_revstr(s2))));
}
