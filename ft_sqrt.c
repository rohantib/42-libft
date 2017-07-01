#include "libft.h"

int ft_sqrt(int nb)
{
	int sqrt = 0;
	while(sqrt*sqrt <= nb)
	{
		if(sqrt*sqrt == nb)
			return sqrt;
		sqrt++;
	}
	return sqrt-1;
}