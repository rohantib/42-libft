#include "libft.h"

int ft_power(int base, int power)
{
	if(power < 0)
		return 0;
	if(power < 1)
		return 1;
	return base * ft_power(base, power-1);
}