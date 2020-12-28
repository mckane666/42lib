/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:17:57 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/26 21:36:35 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumber(int c)
{
	int re;

	if (c < 0)
		c = c * -1;
	if (c >= '0' && c <= '9')
	{
		re = 1;
	}
	else
	{
		re = 0;
	}
	return (re);
}
