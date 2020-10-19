/*
** EPITECH PROJECT, 2020
** print_char_in_hex
** File description:
** print_in_hex
*/

void my_putchar(char const c);

void my_putnbr_base(int nb, char const *base);

void print_char_in_hex(unsigned char c)
{
    char hexa[16] = "0123456789abcdef";

    if (!c)
        return;
    my_putchar('\\');
    if (c <= 0xF)
        my_putchar('0');
    my_putnbr_base(c, hexa);
}
