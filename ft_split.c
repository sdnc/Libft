#include "libft.h"

int	count_words(const char *s, char c)
{
	int	word_count;
	int	control;

	word_count = 0;
	control = 0;
	while (*s)
	{
		if (*s != c && control == 0)
		{
			word_count++;
			control = 1;
		}
		else if (*s == c)
			control = 0;
		s++;
	}
	return (word_count);
}

static char	*ft_strndup(const char *s, int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_memcpy(str, s, n);
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char			**tab;
	unsigned int	i;
	unsigned int	start_idx;
	unsigned int	word_count;

	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start_idx = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start_idx)
		{
			tab[word_count] = ft_strndup(s + start_idx, i - start_idx);
			word_count++;
		}
	}
	tab[word_count] = NULL;
	return (tab);
}
