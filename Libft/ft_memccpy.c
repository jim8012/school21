#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*temp1;
	const char	*temp2;
	size_t		i;

	temp1 = dst;
	temp2 = src;
	i = 0;
	while (i < n)
	{
		temp1[i] = temp2[i];
		if (temp2[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
