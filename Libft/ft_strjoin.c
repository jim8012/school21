#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	int		len1;
	int		len2;

	i = 0;
	j = 0;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	str = (char *)malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
