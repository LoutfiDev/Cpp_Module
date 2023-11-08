# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 14:24:55 by yloutfi           #+#    #+#              #
#    Updated: 2023/11/08 15:19:06 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CC = c++

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-rm -f $(OBJS)

fclean : clean
	-rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re