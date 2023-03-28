/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:16:50 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/28 16:25:02 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	srclen;
	size_t	dstend;

	count = 0;
	srclen = ft_strlen(src);
	dstend = ft_strlen(dst);
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (dstend < (dstsize - 1) && src[count] != '\0')
		{
			dst[dstend] = src[count];
			count++;
			dstend++;
		}
	dst[dstend] = '\0';
	}
	return (srclen + dstend);
}

/*
 int main ()
  {
	  char a[] = "ABCD";
	  char b[] = "1234";
	  int c = ft_strlcat(a, b, 2);
	printf ("%d,,,%s\n",c, a);
	return 0;
  }*/