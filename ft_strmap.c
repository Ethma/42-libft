/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:36:19 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 12:23:18 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(str) * i);
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(*(char *)s);
		s++;
		i++;
	}
	return (str);
}
