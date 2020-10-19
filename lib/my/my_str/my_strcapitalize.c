/*
** EPITECH PROJECT, 2020
** my_strcaptialize
** File description:
** captialize every first letter of each word
*/

int is_char_alphanum(char const c);

static int is_in_word(char const c)
{
    return (is_char_alphanum(c));
}

static char change_str_captial(char str, int state)
{
    if (state == 1 && str >= 'a' && str <= 'z')
        return (str - 32);
    if (state == 2 && str >= 'A' && str <= 'Z')
        return (str + 32);
    return (str);
}

char *my_strcapitalize(char *str)
{
    int in_word = 0;
    int i = 0;
    int state = 0;

    while (str[i]) {
        if (in_word && is_in_word(str[i])) {
            state = 2;
            str[i] = change_str_captial(str[i], state);
        }
        if (!in_word && is_in_word(str[i])) {
            in_word = 1;
            state = 1;
            str[i] = change_str_captial(str[i], state);
        }
        i++;
        if (str[i] && in_word && !is_in_word(str[i]))
            in_word = 0;
    }
    return (str);
}
