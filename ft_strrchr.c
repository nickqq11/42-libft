/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:14:34 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/31 14:37:46 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*start;

	start = (char *)s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *start && (char) c != *s)
		s--;
	if ((char) c == *s)
		return ((char *)s);
	return (0);
}
