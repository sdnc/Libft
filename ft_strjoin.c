/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdzamari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:11:55 by sdzamari          #+#    #+#             */
/*   Updated: 2021/09/20 14:11:56 by sdzamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, s1_len + 1);
	ft_strlcat(newstr + (s1_len), s2, s2_len + 1);
	return (newstr);
}
