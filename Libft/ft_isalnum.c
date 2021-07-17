#include "libft.h"

static int	check_alnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (check_alnum(c))
		return (1);
	return (0);
}
