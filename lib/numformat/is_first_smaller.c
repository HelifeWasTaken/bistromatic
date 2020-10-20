/*
** EPITECH PROJECT, 2020
** get_lowest
** File description:
** get_lowest_number
*/

int is_first_smaller(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);
    int i = 0;

    if (len_s1 != len_s2) {
        return (len_s1 < len_s2);
    }

    while (s1[i] != '\0') {
        i++;
    }
    i--;
    
    return (s1[i] < s2[i]);
}
