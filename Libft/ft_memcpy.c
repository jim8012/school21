#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*temp;
	const unsigned char	*temp1;
	size_t				i;

	temp = dst;
	temp1 = src;
	i = 0;
	if (!(temp) && !(temp1))
		return (0);
	while (i < n)
	{
		temp[i] = temp1[i];
		i++;
	}
	return (temp);
}
