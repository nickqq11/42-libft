/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:16:50 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/14 14:54:32 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
size_t i,j;

i = 0;
j = 0;


if (ft_strlen(dst) >= dstsize)
{
    return(dstsize + ft_strlen(src));
}
else
{
    i = ft_strlen(dst);
    while ((i + 1) < dstsize && src[j] != '\0')
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return((int)i);
}
/*
 int main ()
  {
      char a[] = "ABCD";
      char b[] = "1234";
      int c = ft_strlcat(a, b, 6);
    printf ("%d,,,%s\n",c, a);
    return 0;
  }*/