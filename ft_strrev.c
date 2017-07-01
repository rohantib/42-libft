#include "libft.h"

char *ft_strrev(char *str)
{
	int len = ft_strlen(str);


	char *rev = (char *) malloc(len+1);
	int i = len-1;
	while (i >= 0)
	{
		rev[len-i-1] = str[i];
		i--;
	}

	rev[len] = '\0';
	return rev;
}