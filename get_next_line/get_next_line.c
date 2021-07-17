#include "get_next_line.h"

int	ft_memdelete(void **s)
{
	if (*s)
	{
		ft_memset(*s, 0, ft_strlen(*s));
		free(*s);
		*s = 0;
		return (1);
	}
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	char	*s2;
	int		i;

	if (!s)
		return (0);
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

size_t	checkreadd(int fd, char **longline, char *temp)
{
	ssize_t		readd;
	char		l[BUFFER_SIZE + 1];

	readd = read(fd, l, BUFFER_SIZE);
	if (readd > 0)
	{
		l[readd] = '\0';
		temp = ft_strjoin(*longline, l);
		if (*longline)
			free((void **)*longline);
		*longline = temp;
	}
	return (readd);
}

int	get_next_line(int fd, char **line)
{
	ssize_t		readd;
	char		*temp;
	static char	*longline;

	temp = NULL;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	readd = 1;
	while (!(ft_strchr(longline, '\n')) && readd > 0)
		readd = checkreadd(fd, &longline, temp);
	if (readd == 0)
	{
		*line = ft_strdup(longline);
		ft_memdelete((void **)&longline);
		return (0);
	}
	if (readd > 0)
	{
		*line = ft_substr(longline, 0, (ft_strchr(longline, '\n') - longline));
		temp = ft_strdup(longline + (ft_strlen(*line) + 1));
		ft_memdelete((void **)&longline);
		longline = temp;
		return (1);
	}
	return (-1);
}
