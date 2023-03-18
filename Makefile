# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 17:53:07 by nhuang            #+#    #+#              #
#    Updated: 2023/03/18 21:25:21 by nhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Wextra -Werror 

OBJECTS = $(patsubst %.c, %.o, )

%.o : %.c 
	@$(CC) -c $< -o $@

.PHONY : clean fclean

clean :
	@rm -f *.o

fclean :
	@rm -f $(NAME)