/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 12:55:18 by Mendy             #+#    #+#             */
/*   Updated: 2017/09/08 18:40:38 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    void *ret;

    ret = dest;
    while (n)
    {
        src = dest;
        dest++;
        src++;
        n--;
    }
    return(ret);
}
