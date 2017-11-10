/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:50:34 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/10 15:33:15 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		k;
	size_t	i;
	char	*str;

	i = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(str) * (i));
	while (s1)
	{
		str[j] = s1[j];
		j++;
	}
	while (s2)
	{
		str[j] = s2[k];
		k++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
