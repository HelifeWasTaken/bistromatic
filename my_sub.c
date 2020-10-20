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
    char *answer = malloc(sizeof(char) * (my_strlen(rev_s1)));
    int remain = 0;

    my_bzero(answer, my_strlen(rev_s1));
    for (int i = 0; rev_s1[i]; i++)
        answer[i] = compute_my_sub(rev_s1[i] - '0', rev_s2[i] - '0', &remain);
    return(my_revstr(answer));
}

char *my_sub(char *s1, char *s2)
{
    int has_been_swaped = 0;
    char *answer = NULL;

    s1 = remove_sign(s1);
    s2 = remove_sign(s2);
    if (get_lowest(s2)) {
        my_pointer_swap((void **)&s1, (void **)&s2);
        has_been_swaped = 1;
    }
    if (my_strlen(s1) != my_strlen(s2)) {
        if (my_strlen(s1) > my_strlen(s2))
            s2 = fill_of_zero(s1, s2);
        else
            s1 = fill_of_zero(s2, s1);
    }
    answer = my_revstr(my_get_sub(my_revstr(s1), my_revstr(s2)));
    if (has_been_swaped)
        answer = my_put_in_str(answer, 0, '-');
    return (answer);
}
