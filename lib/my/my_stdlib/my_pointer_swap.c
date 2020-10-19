/*
** EPITECH PROJECT, 2020
** my_str_swap
** File description:
** swap_strings
*/

void my_pointer_swap(void **s1, void **s2)
{
    void *temp = *s1;

    *s1 = *s2;
    *s2 = temp;
}
