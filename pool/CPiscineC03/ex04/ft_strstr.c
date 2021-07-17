#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[i])
			c = i;
			while (str[i] == to_find[i])
				if (str[i + 1] == 0 && to_find[i + 1] == 0)
				return (0);
				else
					return (0);
		i++;
	}
}


int main(void)
{
	char st1[200] = "012345678";
	char st2[200] = "345";

	printf("%s", ft_strstr(st1, st2));
	return (0);
}
