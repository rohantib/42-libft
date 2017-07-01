#include "libft.h"

char *ft_strcpy(char *dest, char *src)
{
	char *start;
	start = dest;
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return start;
}
