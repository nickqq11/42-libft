/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:37:46 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/08 17:40:24 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*chris;

	chris = (unsigned char *) b;
	while (len > 0)
	{
		*chris = c;
		chris++;
		len--;
	}
}
/*
#include<stdio.h>

int main(void)
{
	char org[10] = "hello!";
	printf("%s\n", org);
	ft_memset(org + 2, 49, 2);
	printf("%s\n", org);
	return(0);
}
*/
