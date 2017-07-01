#include "libft.h"

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while(i < n && *src)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	return dest;
}
