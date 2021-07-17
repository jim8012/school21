#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!(needle[0]))
		return ((char *)haystack);
	if (*haystack == 0)
		return (NULL);
	while (i + ft_strlen(needle) - 1 < len && needle && haystack[0] != 0)
	{
		if (len == 0)
			return ((char *)haystack);
		else if (needle[0] != haystack[i])
		{
			i++;
			continue ;
		}
		if (!(ft_strncmp((haystack + i), needle, ft_strlen((char *)needle))))
			return ((char *)haystack + i);
		else
			i++;
	}
	return (0);
}
