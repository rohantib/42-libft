#include "libft.h"

char *ft_strdup(char *src)
{
    int str_length;
    str_length = ft_strlen(src);
    char *dup_string;
    dup_string = malloc(sizeof(char) * (str_length + 1));
    char *start;
    start = dup_string;
    while(*src)
    {
        *dup_string = *src;
        src++;
        dup_string++;
    }
    *dup_string = *src;
    return start;
}