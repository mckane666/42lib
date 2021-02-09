/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:40:39 by jhenriqu          #+#    #+#             */
/*   Updated: 2021/02/08 15:19:48 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;

	if (!s)
		return (NULL);
	new = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(new))
		return (NULL);
	i = -1;
	while (s[++i] != 0)
	{
		new[i] = (*f)(i, s[i]);
	}
	new[i] = 0;
	return (new);
}
