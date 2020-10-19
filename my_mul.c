/*
** EPITECH PROJECT, 2020
** my_mul
** File description:
** multiplication
*/

#include <my_str.h>
#include <my_math.h>
#include <stdlib.h>

static char make_mult(int a, int a2)
{
    char result = 0;

    result = (a * a2) + '0';
    return (result);
}

char *my_mul(char *av1, char *av2)
{
    char *result = malloc(sizeof(char) * (my_strlen(av1) + my_strlen(av2) + 1));
    int index = 0;
    int index2 = 0;
    int resadd = 0;
    
    while (av1 != '\0' && av2 != '\0') {
        if (av2 == "\0") {
            index2 = 0;
            index++;
        }
        result[] = make_mult(av1[index], av2[index2]); 
        resadd = my_add(result + resadd);
        index2++;
    }
    free(av1);
    free(av2);
    return (my_revstr(result));
}

int main(void)
{
    my_mul(my_revstr(my_strdup(av1)), my_revstr(my_strdup(av2));
}