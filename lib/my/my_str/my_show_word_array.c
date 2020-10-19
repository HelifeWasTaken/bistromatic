/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** show a word array
*/

void my_putchar(char const c);

void my_putstr(char const *str);

void my_show_word_array(char *const *tab)
{
    if (!tab)
        return;
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
