/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 16:53:46 by Mendy             #+#    #+#             */
/*   Updated: 2017/09/29 17:02:08 by Mendy            ###   ########.fr       */
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

char    *ft_strncat(char* dest, char* src, int n)
{
    int i;

    i = ft_strlen(dest);
    while(n != 0 || *src == 0)
    {
        dest[i] = *src;
        i++;
        src++;
        n--;
    }
    dest[i] = 0;
    return(dest);
}

int     main(int ac, char** av)
{
    printf("%s\n", ft_strncat(av[1], av[2], atoi(av[3])));
    return(0);
}
