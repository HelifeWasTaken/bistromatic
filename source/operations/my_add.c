/*
** EPITECH PROJECT, 2020
** do_op_calculations.c
** File description:
** calculation functions
*/

#include <my_str.h>
#include <my_stdlib.h>
#include <stdlib.h>
#include <my_numformat.h>
#include <my_stdlib.h>
#include <my_opp.h>

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

    my_bzero(ans, my_strlen(s2_rev) + 2);
    ans[my_strlen(s2_rev) + 2] = '\0';
    while (s2_rev[i]) {
        ans[i] = compute_add(s1_rev[i] - '0', s2_rev[i] - '0', &remain);
        i++;
    }
    if (remain)
        ans[i] = compute_add(0, 0, &remain);
    return (ans);
}

char *my_add(char const *s1, char const *s2)
{
    char *s1_dup = my_strdup(s1);
    char *s2_dup = my_strdup(s2);
    int add_minus = (get_sign(s1_dup) == -1);
    char *result = NULL;

    if (get_sign(s1_dup) != get_sign(s2_dup))
        return (my_add_exception(s1_dup, s2_dup));
    s1_dup = remove_sign(s1_dup);
    s2_dup = remove_sign(s2_dup);
    if (my_strlen(s1_dup) < my_strlen(s2_dup))
        my_pointer_swap((void **)&s1_dup, (void **)&s2_dup);
    s2_dup = fill_of_zero(s2_dup, my_strlen(s1_dup));
    result = my_revstr(my_get_add(my_revstr(s1_dup), my_revstr(s2_dup)));
    free(s1_dup);
    free(s2_dup);
    if (!add_minus || *result == '0')
        return (result);
    return (my_put_in_str(result, 0, '-'));
}

char *my_add_exception(char *s1, char *s2)
{
    if (get_sign(s1) == -1) {
        s1 = remove_sign(s1);
        return (invert_sign(my_sub(s1, s2)));
    }
    s2 = remove_sign(s2);
    return (my_sub(s1, s2));
}
