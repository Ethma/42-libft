/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:20:14 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/10 15:38:21 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long i;

	i = n;
	if (i < 0)
	{
		i = -i;
		ft_putchar_fd('-');
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10);
		ft_putnbr_fd(i % 10);
	}
	else
		ft_putchar_fd(i + '0');
}
