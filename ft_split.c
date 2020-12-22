/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:38:27 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/22 14:01:19 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*new_str(char const *s, int start, int end)
{
	char	*new_s;
	int		i;
	int		j;

	j = 0;
	i = start;
	if (!(new_s = malloc(sizeof(char) * end - start)))
		return (NULL);
	while (i < end)
	{
		new_s[j++] = s[i++];
	}
	new_s[j] = 0;
	return (new_s);
}

int		count_c(char const *s, char c)
{
	int		start;
	int		i;

	i = -1;
	start = 0;
	while (s[++i] != 0)
		if (s[i - 1] == c && s[i] != c)
			start++;
	return (start);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**big_new;

	j = 0;
	if (!s || !(big_new = malloc(sizeof(char *) * count_c(s, c) + 1)))
		return (NULL);
	i = -1;
	while (s[++i] != 0)
	{
		if (s[i] != c && s[i - 1] == c)
			start = i;
		if ((s[i] != c && s[i + 1] == c) || (s[i + 1] == 0 && s[i] != c))
		{
			if (!(big_new[j] = malloc(sizeof(char) * (i + 1) - start)))
				return (NULL);
			big_new[j++] = new_str(s, start, i + 1);
		}
	}
	big_new[j] = 0;
	return (big_new);
}
