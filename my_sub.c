/*
** EPITECH PROJECT, 2020
** my_sub
** File description:
** substract
*/

#include <my_str.h>
#include <my_stdlib.h>
#include <stdlib.h>

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

char *my_sub(char *rev_s1, char *rev_s2)
{
    char *answer = malloc(sizeof(char) * (my_strlen(rev_s1)));
    int remain = 0;

    my_bzero(answer, my_strlen(rev_s1));
    for (int i = 0; rev_s1[i]; i++)
        answer[i] = compute_my_sub(rev_s1[i] - '0', rev_s2[i] - '0', &remain);
    return(my_revstr(answer));
}
