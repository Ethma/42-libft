/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:34:59 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/09 09:36:23 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dest, char *src, size_t n)
{
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
