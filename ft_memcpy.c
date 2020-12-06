/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:52:56 by user              #+#    #+#             */
/*   Updated: 2020/12/03 16:52:56 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	while ((size_t)i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}
