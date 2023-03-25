/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:57:31 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/25 22:07:42 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    
    size_t i;
    size_t count;
    char *temp;

    i = 0;
    count = 0;
    temp = (char*) haystack;
 

    if (needle[0] == '\0' || haystack == needle || len == 0)
    {
        return(temp);
    }
    while (temp[i] != '\0' && i < len)
    {
        while (temp[i + count] == needle[count] && (i + count) < len)
        {
            if(needle[count+1] == '\0')
            {
                return((char *)&temp[i]);
            }
            count++;
        }
        count = 0;
        i++;
    }
    return(NULL);
}