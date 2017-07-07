#include "libft.h"

char *ft_strdup(char *src)
{
    int str_length;
    str_length = ft_strlen(src);
    char *dup_string;
    dup_string = malloc(sizeof(char) * (str_length + 1));
    ft_strcpy(dup_string, src);
    dup_string[str_length] = '\0';
    return dup_string;
}