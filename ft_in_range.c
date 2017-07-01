#include "libft.h"

int ft_in_range(char lower_bound, char upper_bound, char character)
{
	return (lower_bound <= character && character <= upper_bound);
}