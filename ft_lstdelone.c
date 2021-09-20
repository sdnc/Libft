/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdzamari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:09:55 by sdzamari          #+#    #+#             */
/*   Updated: 2021/09/20 14:09:56 by sdzamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed. No return. */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
