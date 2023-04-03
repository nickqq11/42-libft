/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:12:02 by nhuang            #+#    #+#             */
/*   Updated: 2023/04/03 18:53:08 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	findsize(int n)
{
	size_t	size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*str;

	size = findsize(n);
	if (n < 0)
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	*(str + size--) = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		*(str + size--) = n % 10 + '0';
		n /= 10;
	}
	if (n < 0)
		*(str + --size) = '-';
	return (str);
}
