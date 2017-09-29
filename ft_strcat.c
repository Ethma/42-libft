/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:45:25 by Mendy             #+#    #+#             */
/*   Updated: 2017/09/29 16:45:22 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char* str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strcat(char* dest, char* src)
{
    int i;

    i = ft_strlen(dest);
    while(*src)
    {
        dest[i] = *src;
        i++;
        src++;
    }
    dest[i] = 0;
    return(dest);
}
