/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:45:33 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/07 18:45:33 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp[n];
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		temp[i] = ((const char *)src)[i];
		i++;
	}
	while (j < n)
	{
		((char *)dest)[j] = temp[j];
		j++;
	}
	return (dest);
}
