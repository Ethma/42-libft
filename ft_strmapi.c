/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:29:55 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/14 16:32:22 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!str)
		return (0);
	i = ft_strlen((char *)s);
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		str[i] = (*f)(i, *(char *)s);
		s++;
		i++;
	}
	return (str);
}
