/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:23:50 by tjani             #+#    #+#             */
/*   Updated: 2021/01/24 16:42:28 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int yi;
	int xi;

	yi = 1;
	xi = 1;
	while (yi <= y)
	{
		while (xi <= x)
		{
			if ((xi == 1 && yi == 1) || (xi == 1 && yi == y))
			{
				ft_putchar('A');
			}
			else if ((xi == x && yi == y) || (xi == x && yi == 1))
				ft_putchar('C');
			else if ((xi == x || xi == 1 || yi == 1 || yi == y))
				ft_putchar('B');
			else
				ft_putchar(32);
			xi++;
		}
		xi = 1;
		ft_putchar(10);
		yi++;
	}
}
