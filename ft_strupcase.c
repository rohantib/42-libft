#include "libft.h"

char *ft_strupcase(char *str)
{
	char *start = str;
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return start;
}
