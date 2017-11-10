/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:29:55 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/10 15:33:33 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(str) * (ft_strlen(s)));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = (*f)(i, s);
		s++;
		i++;
	}
	return (str);
}
