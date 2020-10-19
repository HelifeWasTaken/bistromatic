/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** Concatenation of two strings
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len_of_src = my_strlen(dest);

    while (src[i]) {
        dest[i + len_of_src] = src[i];
        i++;
    }
    dest[i + len_of_src] = '\0';
    return (dest);
}
