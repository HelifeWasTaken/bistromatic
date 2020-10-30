/*
** EPITECH PROJECT, 2020
** my_itoa
** File description:
** iota
*/

void itoa(int n, char *s, char const *base)
{
    int i = 0;
    int size_base = my_strlen(base);

    if (n < 0)
        n -= n;
    do {
        s[i] = base[n % size_base + '0'];
        i++;
        n /= size_base;
    } while (n > 0);
    s[i] = '\0';
    my_revstr(s);
}
