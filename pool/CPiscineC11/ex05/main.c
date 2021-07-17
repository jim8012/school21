/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 21:05:49 by tjani             #+#    #+#             */
/*   Updated: 2021/02/03 21:05:51 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "f.h"

int		dothis(char *a, char *p, char *b)
{
	int a1;
	int a2;

	a1 = ft_atoi(a);
	a2 = ft_atoi(b);
	if (p[1])
		return (0);
	if (p[0] == '+')
		plus(a1, a2);
	if (p[0] == '-')
		minus(a1, a2);
	if (p[0] == '/')
		division(a1, a2);
	if (p[0] == '%')
		modulo(a1, a2);
	if (p[0] == '*')
		mult(a1, a2);
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	if ((argv[2][0] == '+') || (argv[2][0] == '-') || (argv[2][0] == '%'))
		dothis(argv[1], argv[2], argv[3]);
	else if ((argv[2][0] == '/') || (argv[2][0] == '*'))
		dothis(argv[1], argv[2], argv[3]);
	else
	{
		ft_putchar('0');
		return (0);
	}
	return (0);
}
