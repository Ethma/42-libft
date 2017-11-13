/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:15:05 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 16:29:42 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*dest;

	dest =(void *)malloc(sizeof(dest)* len);
	ft_memcpy(dest, src, len);
	ft_memcpy(dst, dest, len);
	free(dest);
	return (dst);
}
