/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:26:04 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/14 15:25:46 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_space(size_t i, size_t j, const char *s)
{
	while (i != j)
	{
		if (ft_isalpha(s[j]) == 1 || ft_isalpha(s[i] == 1))
			return (0);
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			return (1);
		i++;
		j--;
	}
	return (0);
}
