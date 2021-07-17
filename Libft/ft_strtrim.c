#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	d;
	char	*temp;

	i = 0;
	d = 0;
	j = ft_strlen((char *)s1);
	if (!set || !s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j]) && j > i)
		j--;
	if (i > j)
		return (NULL);
	temp = ft_substr(s1, i, (j - i + 1));
	if (!(temp))
		return (0);
	while (temp[d])
		d++;
	temp[d] = '\0';
	return (temp);
}
