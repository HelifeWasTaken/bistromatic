/*
** EPITECH PROJECT, 2020
** my_get_sign
** File description:
** get_sign_for_infinadd
*/

int get_sign(char const *str);

char get_global_sign(char const *str1, char const *str2)
{
    int sign_s1 = get_sign(str1);
    int sign_s2 = get_sign(str2);

    if (sign_s1 == -1 && sign_s2 == -1)
        return ('+');
    else if (sign_s1 == -1 || sign_s2 == -1)
        return ('-');
    return ('+');
}
