/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 09:10:37 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 13:03:22 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = (ft_countint(n) + 1);
	s = (char *)malloc(sizeof(s) * i);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	if (n == 0)
		s[0] = 48;
	s[i - 1] = '\0';
	while (n)
	{
		i--;
		s[i - 1] = ((n % 10) + '0');
		n = n / 10;
	}
	return (s);
}
