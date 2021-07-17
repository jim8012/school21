/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 19:17:53 by tjani             #+#    #+#             */
/*   Updated: 2021/02/04 21:30:19 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_LIST_H
# define _FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void				ft_list_push_back(t_list **begin_list, void *data);

#endif
