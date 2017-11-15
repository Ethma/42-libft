/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:21:35 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/15 12:14:03 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	tab = ft_strnew(ft_strlen(s) + 1);
	if (!tab || !c || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			k = 0;
			while (s[i + k] && (s[i + k] != c))
				k++;
			tab[j++] = ft_strsub(s, i, k);
			i = i + k;
		}
	}
	tab[j] = '\0';
	return (tab);
}
