#include "libft.h"

int ft_strcmp(char *s1, char *s2)
{
	int diff;
	while(*s1 || *s2)
	{
		diff = *s1 - *s2;
		if(diff != 0)
		{
			return diff;
		}
		s1++;
		s2++;
	}
	return 0;
}
