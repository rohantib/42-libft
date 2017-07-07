#include "libft.h"

short is_whitespace(char c)
{
    if(c == ' ' || c == '\n' || c == '\t')
        return 1;
    return 0;
}

char * ft_strtrim(char *s)
{
    int str_len;
    str_len = ft_strlen(s);
    char *s_end;
    int trimmed_len;
    char *trimmed_str;

    // Subtract 1 to move it behind the null terminator
    s_end = s + str_len - 1;
    
    // Get start of trimmed string
    while(is_whitespace(*s))
        s++;
    
    // Get end of trimmed string
    while(is_whitespace(*s_end))
        s_end--;
    
    // Add 1 to make the length inclusive of both pointers
    trimmed_len = s_end - s + 1;
    
    // Add 1 to trimmed_len for null terminator in malloced string
    trimmed_str = malloc(sizeof(char) * (trimmed_len+1));
    if(trimmed_str == NULL)
    {
        return NULL;
    }

    ft_strncpy(trimmed_str, s, trimmed_len);
    trimmed_str[trimmed_len] = '\0';
    return trimmed_str;
}

