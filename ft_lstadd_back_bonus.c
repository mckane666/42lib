/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:26:24 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/28 12:27:40 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (lst && new)
	{
		last = *lst;
		if (!last)
			*lst = new;
		else
		{
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
}
