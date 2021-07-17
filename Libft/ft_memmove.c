#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*sourse;
	unsigned char		*dest;
	size_t				i;

	sourse = src;
	dest = dst;
	i = 0;
	if (!(dst) && (!(src)))
		return (0);
	if (dest > sourse)
	{
		while (len--)
			dest[len] = sourse[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = sourse[i];
			i++;
		}
	}
	return (dst);
}
