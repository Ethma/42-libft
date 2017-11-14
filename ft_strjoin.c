/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:50:34 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/14 16:31:43 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	k;
	size_t	i;
	char	*str;

	k = 0;
	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	str = ft_strnew(i);
	if(!str)
		return (0);
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	while (s2[k])
	{
		str[j] = s2[k];
		k++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
