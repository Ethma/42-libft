/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:36:19 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/14 16:34:55 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (!str)
		return (0);
	i = ft_strlen(s);
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		str[i] = (*f)(*(char *)s);
		s++;
		i++;
	}
	return (str);
}
