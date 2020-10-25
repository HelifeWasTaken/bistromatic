/*
** EPITECH PROJECT, 2020
** is_first_smaller
** File description:
** get_lowest_number
*/

#include <my_str.h>
#include <stdbool.h>
#include <my_numformat.h>

bool is_first_smaller_unsigned(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);
    int i = 0;
    
    if (len_s1 != len_s2)
        return (len_s1 < len_s2);
    while (s1[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] < s2[i]);
        i++;
    }
    return (false);
}
