#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	j;
	size_t	str_len;
	char	*temp;

	j = 0;
	s1 = (char *)s;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	str_len = ft_strlen(s + start);
	if (str_len < len)
		len = str_len;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, &s1[start], len + 1);
	return (temp);
}
