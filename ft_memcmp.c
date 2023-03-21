/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:41:36 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/21 19:06:10 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char*)s1)[i] != ((unsigned char *)s2)[i])
        {
            return(((unsigned char*)s1)[i] - ((unsigned char *)s2)[i]);
        }
        i++;
    }
}