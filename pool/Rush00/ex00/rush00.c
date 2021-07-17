/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:48:42 by cluco             #+#    #+#             */
/*   Updated: 2021/01/24 15:53:05 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rush(int x, int y)
{
	int		i;
	int		j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (((i > 0) && (i < x - 1)) && ((j == 0) || (j == y - 1)))
				ft_putchar('-');
			if (((i > 0) && (i < x - 1)) && ((j > 0) && (j < y - 1)))
				ft_putchar(32);
			if (((i == 0) || (i == x - 1)) && ((j == 0) || (j == y - 1)))
				ft_putchar('o');
			if (((i == 0) || (i == x - 1)) && ((j > 0) && (j < y - 1)))
				ft_putchar('|');
			i++;
		}
		ft_putchar(10);
		j++;
	}
}
