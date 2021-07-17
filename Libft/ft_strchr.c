#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s2;
	int		i;

	s2 = (char *)s;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == (char)c)
			return (&s2[i]);
		i++;
	}
	if (c == 0)
		return (&s2[i]);
	return (NULL);
}
