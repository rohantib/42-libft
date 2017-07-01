#include "libft.h"

char *ft_strstr(char *str, char *to_find)
{
	char *start;
	start = to_find;
	char *substring_start;
	substring_start = str;
	while(*str)
	{
		if(!*to_find)
		{
			return substring_start;
		}
		if(*str == *to_find)
		{
			if(start == to_find)
			{
				substring_start = str;
			}
			to_find++;
		}
		else
		{
			if(start != to_find)
			{
				to_find = start;
			}
		}
		str++;
	}
	return NULL;

}
