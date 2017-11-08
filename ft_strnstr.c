/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:45:59 by mabessir          #+#    #+#             */
/*   Updated: 2017/11/08 16:06:28 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    while (haystack[i] && (i + ft_strlen(((char *)needle)) <= len))
    {
        j = 0;
        while (needle[j] == haystack[i + j])
        {
            if (needle[j + 1] == '\0')
                return (((char *)haystack + i));
            j++;
        }
        i++;
    }
    return (0);
}
