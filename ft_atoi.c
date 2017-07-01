#include "libft.h"

int ft_atoi(char *str)
{
	int result = 0;
	int ten_power = ft_strlen(str) - 1;
	int negative = 0;
	if(*str == '-') {
		negative = 1;
		str++;
		ten_power--;
	}
	while(*str)
	{
		int digit = *str - '0';
		if (negative) {
			result -= digit * ft_power(10, ten_power);
		}
		else {
			result += digit * ft_power(10, ten_power);
		}
		str++;
		ten_power--;
	}
	return result;
}