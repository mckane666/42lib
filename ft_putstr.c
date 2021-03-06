/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:18:03 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/10/28 15:19:10 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		write(1, str, i);
	}
}
