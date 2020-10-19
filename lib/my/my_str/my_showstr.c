/*
** EPITECH PROJECT, 2020
** my_showstr.c
** File description:
** Print every non printable character with their hex value
*/

void my_putchar(char c);

void my_putstr(char const *str);

void my_putnbr_base(int nb, char const *str);

void print_char_in_hex(unsigned char c);

void my_showstr(char const *str)
{
    if (!str)
        return;
    for (int i = 0; str[i]; i++) {
        if (!(str[i] >= 32 && str[i] <= 126))
            print_char_in_hex(str[i]);
        else
            my_putchar(str[i]);
    }
}
