/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:29:55 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 12:24:46 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(str) * i);
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, *(char *)s);
		s++;
		i++;
	}
	return (str);
}
