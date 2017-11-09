/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:36:19 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/09 15:46:04 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(str) * (ft_strlen(s)));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
