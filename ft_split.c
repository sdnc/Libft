#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_count++;
			while (*s != c)
				s++;
		}
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char	**strs;
	char	**strs_memaddress;

	word_count = count_words(s, c);
	strs = (char **)malloc((word_count + 1) * sizeof(char));
	if (!strs)
		return (NULL);
	strs_memaddress = strs;
	while (word_count-- > 0)
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] != c && s[i] != 0)
			i++;
		*strs = (char *)malloc((i + 1) * sizeof(char));
		if (!*strs)
			return (NULL);
		i = 0;
		while (*s != c && *s != 0)
			(*strs)[i++] = *s++;
		(*strs) = 0;
		strs++;		
	}
	*strs = 0;
	return (strs_memaddress);
}
