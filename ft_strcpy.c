/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:35:05 by Mendy             #+#    #+#             */
/*   Updated: 2017/11/08 15:13:56 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (ft_strlen(dest) < ft_strlen(src))
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
