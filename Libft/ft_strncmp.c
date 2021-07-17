#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*r1;
	unsigned char	*r2;

	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	if (!r1)
		return (r1[i] - r2[i]);
	while (i < n - 1 && r1[i] && r1[i] == r2[i])
		i++;
	return (r1[i] - r2[i]);
}
