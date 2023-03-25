/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:57:31 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/25 18:32:47 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    
    size_t i;
    size_t count;
    size_t lenth;
    char *temp;

    i = 0;
    count = 0;
    temp = (char*) haystack;
    lenth = ft_strlen(needle);

    if (needle[0] == NULL || haystack == needle)
    {
        return(temp);
    }
    while (temp[i] != '\0')
    {
        while (temp[i + count] == (char*) needle[count])
        {
            if(needle[count] == '\0')
            {
                return(temp[i]);
            }
            count++;
        }
        i++;
    }
    return(NULL);
}