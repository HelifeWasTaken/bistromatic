/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** Printing numbers
*/

#include <unistd.h>

void my_putchar(const char c);

void my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else
        my_putchar(nb + '0');
}
