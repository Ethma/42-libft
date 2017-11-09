/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:00:42 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/09 15:50:34 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = ((unsigned char *)s);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == ((unsigned char)c))
			return (s[i]);
		i--;
	}
	return (NULL);
}
