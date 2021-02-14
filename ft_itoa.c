/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 20:17:09 by jhenriqu          #+#    #+#             */
/*   Updated: 2021/02/12 10:44:17 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The itoa() function converts int to string.
*/

char	*ft_itoa(int n)
{
	char		*str;
	int			count;
	long long	ln;

	count = 1;
	ln = n;
	while (n /= 10)
		count++;
	if (!(str = malloc(sizeof(char) * count + 2)))
		return (NULL);
	if (ln == 0)
		str[0] = '0';
	if (ln < 0)
	{
		str[0] = '-';
		ln = ln * -1;
		count++;
	}
	str[count] = '\0';
	while (ln > 0)
	{
		str[--count] = ln % 10 + '0';
		ln = ln / 10;
	}
	return (str);
}
