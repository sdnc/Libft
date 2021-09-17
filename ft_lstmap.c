/* Iterates the list ’lst’ and applies the function
 ’f’ to the content of each element.
Creates a new list resulting of the successive applications of the function ’f’.
The ’del’ function is used to delete the content of an element if needed. */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	ret = 0;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (ret);
}
