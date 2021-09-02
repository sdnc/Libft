#include <libft.h>
#include <stdlib.h>

void	*calloc(size_t count, size_t size)
{
	char	*ptr;

	if(!(ptr = malloc(count * size)))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
