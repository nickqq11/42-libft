/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:22:54 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/30 07:58:49 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*newdst;
	unsigned char	*newsrc;

	newdst = (unsigned char *) dst;
	newsrc = (unsigned char *) src;
	count = len -1;
	if (!dst && !src)
	{
		return (0);
	}
	while (count >= 0)
	{
		newdst[count] = newsrc[count];
		count--;
	}
	return (dst);
}
