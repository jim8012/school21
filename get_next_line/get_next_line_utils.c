#include "get_next_line.h"

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

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

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
	while (i >= 0 && s1 && s1[i] !='\0')
		str[j++] = s1[i++];
	i = 0;
	while (i >= 0 && s2 && s2[i] !='\0')
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
