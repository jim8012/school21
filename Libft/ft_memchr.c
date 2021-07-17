#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	c2;
	size_t			i;

	temp = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temp[i] == c2)
			return (temp + i);
		i++;
	}
	return (NULL);
}
