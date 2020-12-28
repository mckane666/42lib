/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 10:34:09 by jhenriqu          #+#    #+#             */
/*   Updated: 2020/12/28 10:54:00 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int		main(void)
**{
**	char	str[] = "lorem ipsum dolor sit";
**	char	name[] = "this is my name";
**
**	t_list	*elem;
**
**	elem = ft_lstnew((void *)str);
**	printf("\ncontent : %s\n", (char *)elem->content);
**	printf("\ncontent : %s\n", (char *)elem->next);
**}
*/
