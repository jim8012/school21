#include "ft_printf.h"

int	cntNx(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

char	*convertx(char *res, unsigned long n, int i, char c)
{
	if (n == 0)
		res[0] = '0';
	res[i] = '\0';
	while (n != 0)
	{
		if (n % 16 < 10)
			res[i - 1] = n % 16 + 48;
		else if (n > 9 && c == 'x')
			res[i -1] = n % 16 + 87;
		else if (n > 9 && c == 'X')
			res[i -1] = n % 16 +'A' -10;
		n = n / 16;
		i--;
	}
	return (res);
}

char	*itoa_x(unsigned long n, char c)
{
	char	*res;
	int		len;

	len = cntNx(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res = convertx(res, n, len, c);
	return (res);
}
