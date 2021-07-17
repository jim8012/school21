/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:47:14 by tjani             #+#    #+#             */
/*   Updated: 2021/01/25 23:05:21 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sp(char a)
{
	if (a == ' ' || a == '\f' || a == '\n')
		return (1);
	else if (a == '\r' || a == '\t' || a == '\v')
		return (1);
	else
		return (0);
}

int	plusminus(char a)
{
	if (a == '+' || a == '-')
	{
		if (a == '-')
			return (-1);
		else
			return (1);
	}
	else
		return (0);
}

int	checkdi(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

int	cntdg(char *str, int i)
{
	int res;

	while (checkdi(str[i]) && checkdi(str[i + 1]))
	{
		res = (res + str[i] - 48) * 10;
		i++;
	}
	return (res + (str[i] - 48));
}

int	ft_atoi(char *str)
{
	int i;
	int m;

	i = 0;
	m = 1;
	if (str[0] == 0)
		return (0);
	while (sp(str[i]))
	{
		if (sp(str[i + 1]) || plusminus(str[i + 1]) || checkdi(str[i + 1]))
			i++;
		else
			return (0);
	}
	while (plusminus(str[i]))
	{
		if (plusminus(str[i + 1]) || checkdi(str[i + 1]))
		{
			m = m * (plusminus(str[i]));
			i++;
		}
		else
			return (0);
	}
	return (cntdg(str, i) * m);
}
