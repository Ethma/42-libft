/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:21:35 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/13 12:39:48 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_replace(const char *str, char c, char c2)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			*((char *)str + i) = c2;
		}
		i++;
	}
	return ((char *)str);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	tmp[ft_strlen((char *)s + 1)];
	char	**tab;

	i = 0;
	j = 0;
	k = ft_strlen((char *)s);
	ft_bzero(tmp, (sizeof(tmp)));
	ft_strcpy(tmp, (char *)s);
	ft_replace(tmp, c, '\0');
	tab = (char **)malloc(sizeof(*tab) * (k));
	while (i < k && s[i])
	{
		while (s[i] == c)
			i++;
		tab[j] = ft_strdup(tmp + i);
		j++;
		while (tmp[i] != '\0')
			i++;
		i++;
	}
	*tab[j] = '\0';
	return (tab);
}
