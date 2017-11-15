/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:15:05 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/15 12:18:31 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	 char	*dest[len];

	ft_memcpy(dest, src, len);
	ft_memcpy(dst, dest, len);
	return (dst);
}
