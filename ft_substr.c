/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:03:20 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/20 13:11:48 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	if ((int)start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (!(sbs = malloc(sizeof(char) * len + 1)))
		return (NULL);
	j = 0;
	i = start;
	while ((size_t)j < len)
	{
		sbs[j] = ((char *)s)[i];
		i++;
		j++;
	}
	sbs[j] = '\0';
	return (sbs);
}
