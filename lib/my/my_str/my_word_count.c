/*
** EPITECH PROJECT, 2020
** my_word_count.c
** File description:
** count_the_numbers_of_words_in_a_string
*/

int is_char_alphanum(char const c);

int my_word_count(char const *str)
{
    int count = 0;
    int state = 0;

    for (int i = 0; str[i]; i++) {
        if (is_char_alphanum(str[i]) && state == 0) {
            state = 1;
            count++;
        } else if (!(is_char_alphanum(str[i])) && state == 1) {
            state = 0;
        }
    }
    return (count);
}
