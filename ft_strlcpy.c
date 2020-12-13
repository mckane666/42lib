/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:56:33 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/06 20:43:59 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (dest[i] != '\0')
	{
		if (size > 0)
		{
			if (size > i)
			{
				dest[i] = src[i];
			}
			else
			{
				dest[i] = '\0';
			}
		}
		i++;
	}
	return (ft_strlen(src));
}
