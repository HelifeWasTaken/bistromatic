/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** Printing numbers
*/

void my_putchar(char const c);

int my_strlen(char const *str);

static void process_number(int nb, int base_size, char const *base)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb >= base_size) {
        process_number(nb / base_size, base_size, base);
        my_putchar(base[nb % base_size]);
    } else
        my_putchar(base[nb]);
}

void my_putnbr_base(int nb, char const *base)
{
    int base_size = my_strlen(base);

    if (nb && base_size > 0)
        process_number(nb, base_size, base);
}
