/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:08:31 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 16:25:00 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_is_space(char *str)
{

}

int     ft_is_negative(char *str)

int     ft_atoi(const char *str);
{
    int     i;
    long    res;
    int     neg;
    char    *strr;

    strr =((char *)str);
    i = 0;
    while(strr[i])
    {
        while(ft_is_space(strr[i]) == 1)
            i++;
        if(ft_is_negative(strr[i] == 1)
            neg = 1
    }

    return (neg = 1 ? -res : res);
}
