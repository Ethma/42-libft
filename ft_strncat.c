/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 16:53:46 by Mendy             #+#    #+#             */
/*   Updated: 2017/11/08 15:14:17 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int n)
{
	int i;

	i = ft_strlen(dest);
	while (n != 0 || *src == 0)
	{
		dest[i] = *src;
		i++;
		src++;
		n--;
	}
	dest[i] = 0;
	return (dest);
}
