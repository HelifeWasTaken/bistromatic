/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** Concatenate n bytes of two strings
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len_of_src = my_strlen(dest);

    while (src[i] && i < nb) {
        dest[i + len_of_src] = src[i];
        i++;
    }
    dest[i + len_of_src] = '\0';
    return (dest);
}
