/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:38:47 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 15:12:51 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, size_t n, int c)
{
	int	i;

	i = 0;
	while (n)
	{
		if (((char *)src)[i] == c)
			return (dest);
		dest[i] = ((void *)src)[i];
		i++;
		n--;
	}
	return (NULL);
}
