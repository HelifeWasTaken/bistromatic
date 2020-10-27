/*
** EPITECH PROJECT, 2020
** my_sub
** File description:
** substract
*/

#include <my_str.h>
#include <my_stdlib.h>
#include <stdlib.h>
#include <my_numformat.h>
#include <my_opp.h>

static char compute_my_sub(int a, int b, int *remain)
{
    int temp = a - (b + *remain);

    if (temp < 0) {
        temp = a + 10 - (b + *remain);
        *remain = 1;
    } else {
        *remain = 0;
    }
    return (temp + '0');
}

static char *my_get_sub(char *rev_s1, char *rev_s2)
{
    char *answer = my_calloc(sizeof(char), my_strlen(rev_s1) + 2);
    int remain = 0;

    for (int i = 0; rev_s1[i]; i++)
        answer[i] = compute_my_sub(rev_s1[i] - '0', rev_s2[i] - '0', &remain);
    return (my_revstr(answer));
}

char *my_sub(char *s1, char *s2)
{
    int has_been_swapped = 0;
    char *answer = NULL;

    if (get_sign(s1) != get_sign(s2))
        return (my_sub_exception(s1, s2));
    s1 = remove_sign(s1);
    s2 = remove_sign(s2);
    if (is_first_smaller(s1, s2)) {
        my_pointer_swap((void **)&s1, (void **)&s2);
        has_been_swapped = 1;
    }
    if (my_strlen(s1) != my_strlen(s2))
        s2 = fill_of_zero(s2, my_strlen(s1) + 1);
    answer = my_revstr(my_get_sub(my_revstr(s1), my_revstr(s2)));
    answer = remove_trailing_zeroes(answer);
    free(s1);
    free(s2);
    if (has_been_swapped)
        return (invert_sign(my_revstr(answer)));
    return (my_revstr(answer));
}

char *my_sub_exception(char *s1, char *s2)
{
    if (get_sign(s1) == -1) {
        s1 = invert_sign(s1);
        return (invert_sign(my_add(s1, s2)));
    }
    s2 = invert_sign(my_strdup(s2));
    return (my_add(s1, s2));
}
