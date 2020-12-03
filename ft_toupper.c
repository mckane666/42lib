/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:17:57 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/10/30 14:46:06 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char c)
{
    int re;
    unsigned char l;

    l = c;
    if (l >= 'a' && l <= 'z')
    {
	re = l - 32;
    }
    else
    {
	re = l;
    }
    return (re);
}
