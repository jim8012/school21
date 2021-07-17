#include "libft.h"

static int	cntN(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*writeresult(int n, int i, int k, char *result)
{
	result[k + 1] = '\0';
	if (n == 0)
		result[k] = 0 + 48;
	if (n == -2147483648)
	{
		result[0] = '-';
		result[1] = '2';
		n = 147483648;
		i--;
	}
	while (i)
	{
		result[k] = n % 10 + 48;
		n = n / 10;
		k--;
		i--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		k;
	int		p;

	p = 0;
	i = 1;
	if (n != 0)
		i = cntN(n);
	k = i;
	if (n < 0)
		p = 1;
	if (n >= 0)
		k = i - 1;
	result = (char *)malloc(sizeof(char) * i + 1 + p);
	if (!(result))
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		if (n != -2147483648)
			n = n * (-1);
	}
	writeresult(n, i, k, result);
	return (result);
}
