#ifndef LIBFT_H
# define LIBFT_H 

# include <unistd.h>
# include <stdlib.h>

int ft_putchar(char c);

void ft_putnbr(int nb);

void ft_swap(int *a, int *b);

void ft_putstr(char *str);

int ft_strlen(char *str);

char *ft_strrev(char *str);

int ft_power(int base, int power);

int ft_factorial(int nb);

int ft_atoi(char *str);

int ft_sqrt(int nb);

int ft_is_prime(int nb);

char *ft_strcpy(char *dest, char *src);

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strstr(char *str, char *to_find);

int ft_strcmp(char *s1, char *s2);

int ft_strncmp(char *s1, char *s2, unsigned int n);

char *ft_strupcase(char *str);

char *ft_strlowcase(char *str);

int ft_in_range(char lower_bound, char upper_bound, char character);

char *ft_strdup(char *src);

char * ft_strtrim(char *s);

#endif