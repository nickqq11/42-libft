/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:22:54 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/23 19:03:57 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;
    char *tempsrc;

	count = 0;
    tempsrc = (unsigned char *)src;
	while (count < len)
	{
		((char *)dst)[count] = ((char *)tempsrc)[count];
		count++;
	}
}
	
