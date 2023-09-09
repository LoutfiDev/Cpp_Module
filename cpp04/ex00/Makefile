# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 19:45:00 by yloutfi           #+#    #+#              #
#    Updated: 2023/09/08 11:16:19 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CC = g++

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	-rm -f $(OBJS)

fclean : clean
	-rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re