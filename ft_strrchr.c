/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:14:34 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/30 08:01:13 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	unsigned char	*start;

	start = (unsigned char *)s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *start && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
