/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:39:28 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 15:13:37 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c);
{
    int	i;

	i = 0;
	while (n)
	{
		if (s[i] == ((unsigned char)c))
			return (s[i]);
		i++;
		n--;
	}
	return (NULL);
}
