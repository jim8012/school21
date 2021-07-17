/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:29:11 by tjani             #+#    #+#             */
/*   Updated: 2021/02/04 21:30:45 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	if (*begin_list)
	{
		new = *begin_list;
		while (new->next)
			new = new->next;
		nex->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
