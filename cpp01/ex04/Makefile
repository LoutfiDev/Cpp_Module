# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 18:02:20 by yloutfi           #+#    #+#              #
#    Updated: 2023/08/30 12:14:41 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CFLAGS = -Wall -Wextra -Werror -std=g++98 -fsanitize=address -g3
CC = g++

SRCS = main.cpp SedIsLoser.cpp

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