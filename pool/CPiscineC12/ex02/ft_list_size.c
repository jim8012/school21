/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:51:29 by tjani             #+#    #+#             */
/*   Updated: 2021/02/04 20:51:30 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list->next;
	}
	return (i);
}
