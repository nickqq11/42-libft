/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:14:34 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/20 15:05:55 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *temp;
  
    i = 0;
    temp = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            temp = (char *)(s + i);
        }
        s++;        
    }
    if (temp != 0)
    {
        return((char*) temp);
    }
    else 
    {
        return(NULL);
    }
}

