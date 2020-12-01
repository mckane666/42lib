/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:08:17 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/11/04 10:50:28 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size == 0)
	{
		return (s);
	}
	if (size < d)
	{
		return (s + size);
	}
	while (src[i] && d + 1 + i < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
