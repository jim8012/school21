/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:11:18 by msharmai          #+#    #+#             */
/*   Updated: 2021/01/24 20:32:48 by msharmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	ix = 1;
	iy = 1;
	while (iy <= y)
	{
		while (ix <= x)
		{
			if ((ix == 1 && iy == 1) || (ix == x && iy == 1))
				ft_putchar('A');
			else if ((ix == 1 && iy == y) || (ix == x && iy == y))
				ft_putchar('C');
			else if (iy == 1 || ix == 1 || ix == x || iy == y)
				ft_putchar('B');
			else
				ft_putchar(32);
			ix++;
		}
		ix = 1;
		ft_putchar(10);
		iy++;
	}
}
