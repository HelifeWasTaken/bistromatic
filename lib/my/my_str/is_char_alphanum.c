/*
** EPITECH PROJECT, 2020
** my_is_char_alphanum.c
** File description:
** detect if a char is alphanum
*/

int is_num_letter(char const c);

int is_an_alpha_letter(char const c);

int is_char_alphanum(char const c)
{
    return (is_an_alpha_letter(c) || is_num_letter(c));
}
