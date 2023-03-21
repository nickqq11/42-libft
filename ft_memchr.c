/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:55:37 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/21 18:41:04 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memchr(const void *s, int c, size_t n)

{
    size_t i;
    void    *mem;

    i = 0;
    *mem = NULL;
    while(i < n)
    {
        if (((unsigned char*)s)[i] == (unsigned char)c)
        {
            mem = (void *)(s + i);
        }
        i++;
    }
    return(&mem);
}