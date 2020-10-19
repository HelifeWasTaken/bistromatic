/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** Detect if a string is the same
*/

static int is_ascii_higher_or_lower(char const s1, char const s2)
{
    if (s1 > s2)
        return (1);
    return (-1);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i])
            return (is_ascii_higher_or_lower(s1[i], s2[i]));
        i++;
    }
    if (s1[i] != s2[i])
        return (is_ascii_higher_or_lower(s1[i], s2[i]));
    return (0);
}
