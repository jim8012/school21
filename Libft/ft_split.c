#include "libft.h"

static int	str_len(char *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static int	cnt_strs(const char *s, char c)
{
	int	i;
	int	cnt;

	if (!s[0])
		return (0);
	i = 0;
	cnt = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			cnt++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		cnt++;
	return (cnt);
}

static void	*my_free(char **result, int i)
{
	while (i-- > 0)
		free(result[i]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		cnt_strs_;
	int		cnt_len_;

	i = 0;
	if (!s)
		return (NULL);
	cnt_strs_ = cnt_strs(s, c);
	result = malloc((cnt_strs_ + 1) * sizeof(char *));
	if (!(result))
		return (NULL);
	while (cnt_strs_--)
	{
		while (*s == c && *s)
			s++;
		cnt_len_ = str_len((char *)s, c);
		result[i] = ft_substr((char *)s, 0, cnt_len_);
		if (!result[i])
			return (my_free(result, i));
		s = s + cnt_len_;
		i++;
	}
	result[i] = NULL;
	return (result);
}
