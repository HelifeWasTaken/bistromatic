/*
** EPITECH PROJECT, 2020
** my_evil_str
** File description:
** putstr reversed
*/

int my_strlen(char const *str);

void my_swap(int *a, int *b);

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    char *reversed = str;

    if (len <= 0)
        return (str);
    for (int index = 0; index < (len + 1) / 2; index++)
        my_swap((int *)&str[len - index], (int *)&reversed[index]);
    return (reversed);
}
