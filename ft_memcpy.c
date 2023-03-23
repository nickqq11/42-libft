/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:28:02 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/23 19:03:55 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	char *newdst = (char *) dst;
	char *newsrc = (char *) src;

	count = 0;
	if (dst == NULL)
	{
		return (NULL);
	}
	while (count < n)
	{
		newdst[count] = newsrc[count];
		count++;
	}
	return(dst);
}
