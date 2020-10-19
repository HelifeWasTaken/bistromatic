/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** Move pointer to the occurence found
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    if (!to_find)
        return (str);
    while (*str) {
        if (my_strncmp(str, to_find, my_strlen(to_find)) == 0)
            return (str);
        str++;
    }
    return ((void *)0);
}
