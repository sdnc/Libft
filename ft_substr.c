#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new_len;
	char	*substr;

	if (s == NULL)
		return (NULL);
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
