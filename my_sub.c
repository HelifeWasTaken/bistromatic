/*
** EPITECH PROJECT, 2020
** my_sub
** File description:
** substract
*/

#include <my_str.h>
#include <my_stdlib.h>
#include <stdlib.h>
#include <stdio.h>

char compute_my_sub(int a, int b, int *remain_it)
{
    int temp = a - (b + *remain_it);

    if (temp < 0) {
        temp = a + 10 - (b + *remain_it);
        *remain_it = 1;
    } else {
        *remain_it = 0;
    }
    return (temp + '0');
}

char *my_sub(char *s1, char *s2)
{
    char *answer = malloc(sizeof(char) * (my_strlen(s1)));
    int remain_it = 0;

    my_bzero(answer, my_strlen(s1));
    for (int i = 0; s1[i]; i++)
        answer[i] = compute_my_sub(s1[i] - '0', s2[i] - '0', &remain_it);
    return(my_revstr(answer));
}
