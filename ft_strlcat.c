/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:16:50 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/12 17:36:06 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
size_t i,j;

i = 0;
j = 0;
while (dst[i] != '\0')
{
    i++;
}
if (i >= dstsize)
return(i);
else 
while ()
