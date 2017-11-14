/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:54:06 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/14 16:52:56 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static	int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
static	int		ft_len(const char *s)
{
	size_t	i;
	int		count;
	int		count2;

	i 		= 0;
	count	= 0;
	count2	= 0;
	while (ft_isalpha(s[i]) == 0)
		i++;
	if (ft_isalpha(s[i]) == 1)
	{
		while (s[i])
		{
			i++;
			count++;
		}
	}
	if (s[i] == '\0')
	{
		while (ft_isalpha(s[i]) == 0)
			i--;
			count2++;
	}
	return (count - count2);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*str;
	size_t	j;
	size_t	k;

	if (!s)
		return (0);
	k = ft_len(s);
	i = 0;
	j = ft_strlen(s);
	if (ft_is_space(i, j, s) == 1)
		return ((char *)s);
	str = ft_strnew(k);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_isspace(s[i]) == 1)
		i++;
	str = ft_strncpy(str, &s[i], k);
	return (str);
}
