#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	char	*str;
	int		i;

	i = ft_strlen((char *)s1);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	result = str;
	while (i--)
		*str++ = *s1++;
	*str = '\0';
	return (result);
}
