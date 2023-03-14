/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:26:08 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/14 17:17:24 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
  
    i = 0;
    while (*s != '\0')
    {
        if (c == *s)
        {
            return((char*) s);
        }
        s++;        
    }
    return(NULL);
}

int main () 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'z';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}