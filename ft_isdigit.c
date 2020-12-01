/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:17:57 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/10/30 14:45:07 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int re;

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
