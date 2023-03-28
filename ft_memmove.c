/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:22:54 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/28 16:54:36 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;
	char	*newdst;
	char	*newsrc;

	*newdst = (char *) dst;
	*newsrc = (char *) src;
	count = 0;
	if (dst == NULL)
	{
		return (NULL);
	}
	while (len > 0)
	{
		newdst[len - 1] = newsrc[len - 1];
		len--;
	}
	return (dst);
}
