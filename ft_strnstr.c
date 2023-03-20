/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:57:31 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/20 17:15:27 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (needle == NULL)
    {
        return(haystack);
    }
    size_t i;
    size_t j;

    i = 0;
    j = ft_strlen(needle);
    while(len > 0)
    {
        if (haystack[i] == needle[i])

    }
}

//not done yet