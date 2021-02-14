/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:03:20 by jhenriqu          #+#    #+#             */
/*   Updated: 2021/02/13 15:43:51 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbs;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
	{
		if (!(sbs = malloc(sizeof(char) * 1)))
			return (NULL);
		sbs[0] = '\0';
		return (sbs);
	}
	if (!(sbs = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while ((size_t)i < len)
	{
		sbs[i] = ((char *)s)[start + i];
		i++;
	}
	sbs[i] = '\0';
	return (sbs);
}
