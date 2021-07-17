/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:14:32 by tjani             #+#    #+#             */
/*   Updated: 2021/02/02 18:47:06 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "j12.h"

int		checkargc(int a)
{
	if (a <= 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (a > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int				fd;
	int				ret;
	int				i;
	unsigned char	buf[4096];

	if (checkargc(argc))
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (0);
		}
		ret = 1;
		while (ret)
		{
			ret = read(fd, buf, 4096);
			i = 0;
			while (i < ret)
				ft_putchar(buf[i++]);
		}
	}
	return (0);
}
