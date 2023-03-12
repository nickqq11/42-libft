/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:00:39 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/08 19:24:09 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = s;
	while (n > 0 && *temp != '\0')
	{
		*temp = '\0';
		temp++;
		n--;
	}
	s = temp;
}
/*
#include<stdio.h>

int main(void)
{
	char str[10] = "hello";
	printf("%s 1\n", str);
	ft_bzero(&str, 2);
	printf("%s 2\n", str + 2);
	return(0);
}
*/
