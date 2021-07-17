#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const unsigned char	*from;
	unsigned char		*to;
	size_t				i;
	size_t				k;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	while (from[i] != '\0')
		i++;
	k = 0;
	if (dstsize == 0)
		return (i);
	while (from[k] != '\0' && k < dstsize - 1)
	{
		to[k] = from[k];
		k++;
	}
	to[k] = '\0';
	return (i);
}
