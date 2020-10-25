/*
** EPITECH PROJECT, 2020
** my_word_count.c
** File description:
** count_the_numbers_of_words_in_a_string
*/

#include <stdbool.h>

bool is_char_alphanum(char const c);

int my_word_count(char const *str)
{
    int count = 0;
    bool state = false;

    for (int i = 0; str[i]; i++) {
        if (is_char_alphanum(str[i]) && !state) {
            state = true;
            count++;
        } else if (!(is_char_alphanum(str[i])) && state) {
            state = true;
        }
    }
    return (count);
}
