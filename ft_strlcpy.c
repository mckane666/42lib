/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:20:19 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/11/02 09:12:55 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (dest[i] != '\0')
	{
		if (size > 0)
		{
			if (size - 1 > i)
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
