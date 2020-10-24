/*
** EPITECH PROJECT, 2020
** my_num_format
** File description:
** format_numbers
*/

#ifndef _MY_FORMAT_NUM_H_
#define _MY_FORMAT_NUM_H_
char *fill_of_zero(char *str, int n);
char get_global_sign(char const *str1, char const *str2);
int get_sign(char const *str);
char *remove_sign(char const *str);
int is_first_smaller(char const *s1, char const *s2);
char *str_cleaner(char *raw_str);
char *transform_to_base_10(char const *raw_str, char const *op_base,
                           char const *num_base);
int is_zero(char const *str);
char *powten(char *str, int count);
char *remove_trailing_zeroes(char *str);
#endif
