#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*s2;
	int				i;

	s2 = (char *)s;
	i = ft_strlen(s2);
	while (i && s2[i] != (char)c)
		i--;
	if (s2[i] == (char)c)
		return ((char *)&s2[i]);
	return (NULL);
}
