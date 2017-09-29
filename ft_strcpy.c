/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 18:35:05 by Mendy             #+#    #+#             */
/*   Updated: 2017/09/09 00:09:01 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    i++;
    return (i);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    if (ft_strlen(dest) < ft_strlen(src))
        return (0);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
