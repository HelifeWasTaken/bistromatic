/*
** EPITECH PROJECT, 2020
** my_get_len_array.c
** File description:
** Get how many characters in total there is in my array
*/

int my_strlen(char const *dest);

int my_len_str_array(int nb_elements, char **array)
{
    int size = 0;

    for (int i = 0; i < nb_elements; i++)
        size += my_strlen(array[i]);
    return (size);
}
