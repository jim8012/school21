#include "libft.h"

static int	sp(char a)
{
	if (a == ' ' || a == '\f' || a == '\n')
		return (1);
	else if (a == '\r' || a == '\t' || a == '\v')
		return (1);
	else
		return (0);
}

static int	if_plus_minus(char *str, int i)
{
	int	minus;

	minus = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	return (i * minus);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		minus;

	result = 0;
	minus = 1;
	i = 0;
	while (sp(str[i]))
		i++;
	i = if_plus_minus((char *)str, i);
	if (i < 0)
		minus = -1;
	i *= minus;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - 48);
	return (result * minus);
}
