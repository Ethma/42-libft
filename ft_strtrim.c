/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:54:06 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 13:33:56 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		j;

	i = 0;
	j = ft_strlen((char *)s);
	ft_is_space(&i, &j, (char *)s);
	str = (char *)malloc(sizeof(str) * (j));
	if (!str)
		return (0);
	if (i == j)
		return ((char *)s);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
