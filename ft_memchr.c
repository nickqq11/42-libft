/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:55:37 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/24 21:28:45 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memchr(const void *s, int c, size_t n)

{
    size_t i;
    char    *mem;

    i = 0;
    mem = NULL;
    while(i < n)
    {
        if (((unsigned char*)s)[i] == (unsigned char)c)
        {
           return(mem = (char *)(s + i));
        }
        i++;
    }
    return(mem);
}