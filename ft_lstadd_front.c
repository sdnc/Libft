/* Allocates (with malloc(3)) and returns a new
element.  The variable ’content’ is initialized
with the value of the parameter ’content’.  The
variable ’next’ is initialized to NULL.
Returns new element */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
