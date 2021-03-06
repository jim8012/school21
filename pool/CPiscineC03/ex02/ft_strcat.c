/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:07:50 by tjani             #+#    #+#             */
/*   Updated: 2021/01/24 19:04:54 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int ii;

	ii = 0;
	while (dest[ii])
		ii++;
	i = 0;
	while (src[i])
	{
		dest[ii] = src[i];
		i++;
		ii++;
	}
	dest[ii] = 0;
	return (dest);
}
