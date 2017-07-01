#include "libft.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	i = 0;
	int diff;
	while(i < n && (*s1 || *s2))
	{
		diff = *s1 - *s2;
		if(diff != 0)
			return diff;
		s1++;
		s2++;
		i++;
	}
	return 0;
}
