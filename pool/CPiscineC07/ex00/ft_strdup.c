/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:40:35 by tjani             #+#    #+#             */
/*   Updated: 2021/01/29 22:53:29 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup2(char *src)
{
	int		i;
	char	*check;

	i = 0;
	while (src[i])
		i++;
	check = malloc(i + 1);
	if (check)
		return (check);
	else
		return (0);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	p = ft_strdup2(src);
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
