#include "libft.h"

int ft_factorial(int nb)
{
	if(nb > 12)
		return 0;
	if(nb <= 1)
		return 1;
	return nb * ft_factorial(nb-1);
}