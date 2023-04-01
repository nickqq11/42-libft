# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 17:53:07 by nhuang            #+#    #+#              #
#    Updated: 2023/03/31 14:33:56 by nhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Wextra -Werror 

OBJECTS = $(patsubst %.c,%.o,$(wildcard ft_*.c))

all : $(NAME)

$(NAME) : $(OBJECTS)
	@echo "compiling $@ from $^"
	@ar -rcs $@ $^

%.o : %.c 
	@$(CC) -c $< -o $@

.PHONY : clean fclean

clean :
	@rm -f *.o

fclean :
	@rm -f $(NAME)

re :
	@make fclean && make clean && make all