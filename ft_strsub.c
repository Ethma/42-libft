/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:24:14 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 12:47:52 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(str) * (len));
	if (!str)
		return (NULL);
	while ((int)len >= 0)
	{
		str[i] = ((char *)s)[start];
		start++;
		i++;
		len--;
	}
	return (str);
}
