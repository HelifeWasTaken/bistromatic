/*
** EPITECH PROJECT, 2020
** my_mul
** File description:
** multiplication
*/

#include <my_stdlib.h>
#include <stdlib.h>
#include <my_str.h>

char *my_add(char *s1, char *s2);

static char compute_my_mul(int a, int b, int *remain)
{
    int temp = (a + (*remain)) * b;
    int final = 0;

    printf("i0 temp == %d a == %d b == %d remain == %d\n", temp, a, b, *remain);
    if (temp > 10) {
        final = temp % 10;
        while (temp > 10) {
            temp /= 10;
        }
        *remain = temp;
        printf("i3 temp == %d final == %d a == %d b == %d remain == %d\n", temp, final, a, b, *remain);
    } else {
        *remain = 0;
        printf("i1 temp == %d a == %d b == %d remain == %d\n", temp, a, b, *remain);
        return (temp + '0');
    }
    printf("i2 temp == %d final == %d a == %d b == %d remain == %d\n", temp, final, a, b, *remain);
    return (final + '0');
}

static char *my_mul_process_s2(char *s1, char s2, int count)
{
    char *ans = malloc(sizeof(char) * (my_strlen(s1) + 2));
    int remain = 0;
    char *temp = malloc(sizeof(char) * 2);

    my_bzero(ans, my_strlen(s1) + 3);
    ans[0] = '0';
    temp[1] = '\0';
    for (int i = 0; s1[i]; i++) {
        temp[0] = compute_my_mul(s1[i] - '0', s2 - '0', &remain);
        printf("temp == %s\n", temp);
        ans = my_add(ans, temp);
        printf("ans == %s\n", ans);
    }
    free(temp);
    for (int i = 0; i < count; i++)
        ans = my_put_in_str(ans, 0, '0');
    if (remain)
        return (my_revstr(my_put_in_str(ans, 0, remain + '0')));
    return (my_revstr(ans));
}

char *my_mul(char *s1, char *s2)
{
    char *ans = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 2));
    char *temp;

    s1 = my_revstr(s1);
    s2 = my_revstr(s2);
    my_bzero(ans, my_strlen(s1) + my_strlen(s2) + 2);
    ans[0] = '0';
    for (int i = 0; s2[i]; i++) {
        printf("iteration %d \n", i + 1);
        temp = my_mul_process_s2(s1, s2[i], i);
        //printf("before add : ans = %s && temp = %s\n", ans, temp);
        ans = my_add(temp, ans);
        //printf("after add : temp = %s ans = %s\n", temp, ans);
    }
    free(temp);
    return (my_revstr(ans));
}

int main(void)
{
    char *nb = my_mul(my_strdup("51"), my_strdup("7"));
    printf("nb = %s\n", nb);
    return (0);
}
