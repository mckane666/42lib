/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 15:24:57 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/10/27 15:03:58 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int l;

	l = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (nb / 10)
	{
		ft_putnbr(l / 10);
	}
	ft_putchar(l % 10 + '0');
}
