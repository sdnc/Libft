/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdzamari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:09:31 by sdzamari          #+#    #+#             */
/*   Updated: 2021/09/20 14:09:46 by sdzamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given element and every
successor of that element, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL. No return value */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	while (curr)
	{
		next = curr->next;
		ft_lstdelone(curr, del);
		curr = next;
	}
	*lst = NULL;
}
