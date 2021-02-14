/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 18:12:25 by jhenriqu          #+#    #+#             */
/*   Updated: 2021/02/14 14:05:50 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		count_c(const char *s, char c)
{
	int	cont;
	int	n_c;

	cont = ft_strlen(s);
	n_c = 0;
	while (*s)
	{
		if (*s == c)
			n_c++;
		s++;
	}
	return (cont - n_c);
}

char	**ft_split(char const *s, char c)
{
	t_split	val;

	val.j = 0;
	if (!s || !c)
		return (NULL);
	val.big_new = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!(val.big_new))
		return (NULL);
	val.i = 0;
	val.start = 0;
	while (s[val.start + val.i] != 0 && count_c(s, c) > 0)
	{
		while (s[val.start] == c)
			val.start++;
		while (s[val.start + val.i] != c && s[val.start + val.i] != '\0')
			val.i++;
		val.big_new[val.j++] = ft_substr(s, val.start, val.i);
		while (s[val.start + val.i] == c && s[val.start + val.i] != '\0')
			val.i++;
		val.temp = (char *)s + val.i;
		s = val.temp;
		val.i = 0;
	}
	val.big_new[val.j] = '\0';
	return (val.big_new);
}
