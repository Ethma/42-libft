/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:08:31 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/09 11:13:16 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_space(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\v'\
	|| str[i] == '\f' || str[i] == '\r')
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		neg;
	char	*strr;

	strr = ((char *)str);
	i = 0;
	res = 0;
	while (strr[i])
	{
		while (ft_is_space(&strr[i]) == 1)
			i++;
		if (strr[i] == '-')
			neg = 1;
		if (strr[i] == '-' || strr[i] == '+')
			i++;
		while (str[i] && (strr[i] >= '0') && (strr[i] <= '9'))
		{
			res *= 10;
			res += str[i] - '0';
			i++;
		}
		return (neg = 1 ? -res : res);
	}
	return (0);
}
