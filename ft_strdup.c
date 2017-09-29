/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:05:44 by Mendy             #+#    #+#             */
/*   Updated: 2017/09/29 16:38:42 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
