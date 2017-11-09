/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:53:21 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/09 15:49:55 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(str) * (size));
	if (!str)
		return (NULL);
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
	s[i] = '\0';
	return (str);
}
