/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:15:49 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/12 16:16:22 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	while (count < (dstsize - 1))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
	char dest[20] = "ABCDE";
	char src[20] = "FGHI";
	int n,c;

	printf("dest org %s\n ", dest);
	n = ft_strlcpy(dest, src, 5);
	printf("dest mod %s count n = %d \n ", dest, n);
	return(0);
}
*/
