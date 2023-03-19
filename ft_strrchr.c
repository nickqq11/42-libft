/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:14:34 by nhuang            #+#    #+#             */
/*   Updated: 2023/03/19 21:53:28 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *temp;
  
    i = 0;
    while (*s != '\0')
    {
        if (c == *s)
        {
            temp = s;
        }
        s++;        
    }
    if (temp != '\0')
    {
        return((char*) temp);
    }
    else 
    {
        return(NULL);
    }
}

please re do