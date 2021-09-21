/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdzamari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:06:46 by sdzamari          #+#    #+#             */
/*   Updated: 2021/09/20 14:06:48 by sdzamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\f'
		|| c == '\r' || c == '\n' || c == '\v');
}

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;

	result = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
		result = (result * 10) + (*str++ - '0');
	return (result * neg);
}
