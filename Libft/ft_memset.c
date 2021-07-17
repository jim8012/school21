#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = b;
	while (i < len)
		temp[i++] = (unsigned char)c;
	return (temp);
}
