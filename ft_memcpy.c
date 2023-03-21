/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:28:02 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/21 17:55:00 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((char *)dst)[count] = ((char *)src)[count];
		count++;
	}
}
