#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nbr;

	nbr = 0;
	i = 0;
	sign = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		nbr = nbr * 10 + (str[i] - 48);
	if (sign % 2 == 1)
		return (nbr *= -1);
	return (nbr);
}
