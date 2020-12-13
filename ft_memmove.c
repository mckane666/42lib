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
	char	*temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(temp = malloc(sizeof(size_t) * n)))
		return (NULL);
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
	free(temp);
	return (dest);
}
