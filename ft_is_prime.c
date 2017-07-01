#include "libft.h"

int ft_is_prime(int nb)
{
	if(nb <= 1)
		return 0;
	int divisor = 2;
	int sqrt = ft_sqrt(nb);
	while (divisor <= sqrt)
	{
		if(nb % divisor == 0)
			return 0;
		divisor++;
	}
	return 1;
}
