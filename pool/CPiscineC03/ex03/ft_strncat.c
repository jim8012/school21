/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:44:46 by tjani             #+#    #+#             */
/*   Updated: 2021/01/24 19:45:19 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int ii;

	ii = 0;
	while (dest[ii])
		ii++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[ii] = src[i];
		i++;
		ii++;
	}
	dest[ii] = 0;
	return (dest);
}
