/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:05:20 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/09 10:05:22 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = ft_strlen(dest);
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = 0;
	return (dest);
}
