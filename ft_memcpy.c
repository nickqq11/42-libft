/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:28:02 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/20 15:05:32 by nhuang           ###   ########.fr       */
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

/*
int main(void)
{
	char str[] = "hell";
	char sore[] = "123456";
	printf("org %s sore %s \n", str, sore);
	ft_memcpy(str, sore, 5);
	printf("mod %s\n", str);
	return(0);
}
*/
