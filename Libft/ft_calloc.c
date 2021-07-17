#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = (size_t *)malloc((unsigned)(count * size));
	if (result)
		ft_memset(result, 0, size * count);
	return (result);
}
