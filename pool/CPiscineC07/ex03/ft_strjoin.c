/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:16:45 by tjani             #+#    #+#             */
/*   Updated: 2021/01/29 23:17:47 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strlen1(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int ii;

	ii = 0;
	while (dest[ii])
		ii++;
	i = 0;
	while (src[i])
	{
		dest[ii] = src[i];
		i++;
		ii++;
	}
	dest[ii] = 0;
	return (dest);
}

int		lenn(char **strs, int size, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += strlen1(strs[i]);
		i++;
	}
	len += strlen1(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str1;
	int		len;

	i = 0;
	if (size <= 0)
	{
		str1 = malloc(sizeof(char) * 1);
		str1[0] = 0;
		return (str1);
	}
	len = lenn(strs, size, sep);
	str1 = malloc(sizeof(char) * len);
	i = 0;
	while (i < size)
	{
		ft_strcat(str1, strs[i]);
		if (i + 1 < size)
			ft_strcat(str1, sep);
		i++;
	}
	return (str1);
}
