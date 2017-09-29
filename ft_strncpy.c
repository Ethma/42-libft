/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 00:02:52 by Mendy             #+#    #+#             */
/*   Updated: 2017/09/09 00:27:43 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    i++;
    return (i);
}

char    *ft_strncpy(char *dest, char *src, size_t n)
{
    int i;

    i = 0;
    if (ft_strlen(dest) < ft_strlen(src))
        return (0);
    while (n != 0 && src[i] != '\0')
    {
        dest[i] = src[i];
        n--;
        i++;
    }
    return (dest);
}
