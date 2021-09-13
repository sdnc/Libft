#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i--)
		if (s[i] == (char)c)
			return ((char *)s + i);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
