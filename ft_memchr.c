/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:54:57 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 15:12:58 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n);
{
    int	i;

	i = 0;
	while (n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return (s[i]);
		i++;
		n--;
	}
	return (NULL);
}
