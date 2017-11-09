/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:15:05 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/09 10:10:20 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*tmp;

	tmp = (char *)dst;
	dest = (char *)malloc(sizeof(dest) * (ft_strlen(src)));
	if (!dest)
		return (0);
	ft_memcpy(dest, src, len);
	ft_memcpy(dst, dest, len);
	return (dst);
}
