#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[i] && i++ < len)
	{
		substr[i] = s[start];
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
