#include "ft_printf.h"

int	cntNuns(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*convertuns(char *res, unsigned int n, int i)
{
	if (n == 0)
		res[0] = '0';
	res[i] = '\0';
	while (n != 0)
	{
		res[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (res);
}

char	*itoa_uns(unsigned int n)
{
	char	*res;
	int		len;

	len = cntNuns(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res = convertuns(res, n, len);
	return (res);
}
