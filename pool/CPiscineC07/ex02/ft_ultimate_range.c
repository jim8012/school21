/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:18:17 by tjani             #+#    #+#             */
/*   Updated: 2021/01/29 22:55:13 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int				*p;
	unsigned int	i;
	unsigned int	s;

	i = 0;
	if (min >= max)
		return (0);
	s = max - min;
	if (s > 2147483647)
		return (-1);
	p = malloc(sizeof(int) * (max - min));
	if (!(p))
		return (-1);
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (i);
}
