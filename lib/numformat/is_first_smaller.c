/*
** EPITECH PROJECT, 2020
** is_first_smaller
** File description:
** get_lowest_number
*/

int is_first_smaller(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (len_s1 != len_s2) {
        return (len_s1 < len_s2);
    }   
    return (s1[0] < s2[0]);
}
