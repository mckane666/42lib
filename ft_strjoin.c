/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:34:43 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/11/10 12:08:20 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		t;
	int		ss1;
	int		ss2;
	char	*joined;

	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	if (!(joined = (char *)malloc(ss1 + ss2 + 1)))
	{
		return (NULL);
	}
	*joined = 0;
	i = 0;
	while (s1[i] != '\0')
	{
	    joined[i] = s1[i];
		i++;
	}
	t = 0;
	while (s2[t] != '\0')
	{
	    joined[i] = s2[t];
		t++;
	}
	joined[i] = '\0';
	return (joined);
}
