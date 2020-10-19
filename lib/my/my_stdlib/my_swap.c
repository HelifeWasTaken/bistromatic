/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap_two_integers
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
