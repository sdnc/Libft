/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdzamari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:16:23 by sdzamari          #+#    #+#             */
/*   Updated: 2021/09/20 14:16:24 by sdzamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char set)
{
	int	i;
	int	word_count;

	if (!s || !(*s))
		return (0);
	word_count = 0;
	if (s[0] != set)
		word_count++;
	i = 1;
	while (s[i])
	{
		if (s[i] != set && s[i - 1] == set)
			word_count++;
		i++;
	}
	return (word_count);
}

static int	ft_next_word_count(char const *s, char set, int i)
{
	int	word_count;

	word_count = 0;
	while (s[i] == set && s[i] != '\0')
		i++;
	while (s[i] != set && s[i] != '\0')
	{
		word_count++;
		i++;
	}
	return (word_count);
}

static char	**ft_free(char **tab, int nb)
{
	int	i;

	i = 0;
	while (i < nb && tab[i] != 0)
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (0);
}

char	**ft_split(char const *s, char set)
{
	int		i;
	int		idx;
	int		word;
	char	**tab;

	idx = 0;
	word = -1;
	tab = (char **)malloc(sizeof(char *) * (ft_wordcount(s, set) + 1));
	if (!tab || !s)
		return (NULL);
	while (++word < ft_wordcount(s, set))
	{
		i = 0;
		tab[word] = malloc(ft_next_word_count(s, set, idx) + 1);
		if (!(tab[word]))
			return (ft_free(tab, word));
		while (s[idx] != '\0' && s[idx] == set)
			idx++;
		while (s[idx] != '\0' && s[idx] != set)
			tab[word][i++] = s[idx++];
		tab[word][i] = '\0';
	}
	tab[word] = NULL;
	return (tab);
}
