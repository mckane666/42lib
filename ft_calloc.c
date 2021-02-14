/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:15:05 by jhenriqu          #+#    #+#             */
/*   Updated: 2021/02/08 08:17:29 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_calloc() function allocates memory for an array of nmemb
** elements of size bytes each and returns a pointer to the allocated memory.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
