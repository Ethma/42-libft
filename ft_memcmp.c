/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:05:04 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 15:13:03 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *tmp;
    unsigned char *tmp2;
    int            i;

    tmp = ((unsigned char *)s1);
    tmp2 = ((unsigned char *)s2);

    while(n)
    {
        if (tmp != tmp2)
            return(tmp[i] - tmp2[i]);
        i++;
    }
    return (0);
}
