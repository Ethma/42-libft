/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:34:59 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 12:21:17 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dest, char *src, size_t n)
{
	int i;

	i = 0;
	n = ft_strlen(dest);
	while (*src)
	{
		dest[i] = *src;
		n++;
		src++;
	}
	dest[i] = '\0';
	return (n);
}
