/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 19:42:36 by tjani             #+#    #+#             */
/*   Updated: 2021/01/30 20:46:08 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(nbr)	(nbr % 2) == 0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
