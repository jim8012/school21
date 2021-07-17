/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:36:44 by tjani             #+#    #+#             */
/*   Updated: 2021/01/29 22:55:01 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;
	int s;

	i = 0;
	s = max - min;
	if (min >= max || s > 2147483647)
		return (p = 0);
	p = malloc(sizeof(int) * (max - min));
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
