/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:16:56 by tjani             #+#    #+#             */
/*   Updated: 2021/02/03 16:17:14 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if ((f(tab[i], tab[i + 1]) < 0) && (i < length - 1))
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
		return (1);
	}
	if ((f(tab[i], tab[i + 1]) > 0) && (i < length - 1))
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}
