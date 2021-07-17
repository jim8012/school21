/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:30:43 by tjani             #+#    #+#             */
/*   Updated: 2021/01/23 20:53:04 by tjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
		{
			while (i < n)
			{
				dest[i] = 0;
				i++;
			}
		}
		i++;
	}
	return (dest);
}
