# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 12:38:44 by yloutfi           #+#    #+#              #
#    Updated: 2023/08/23 14:50:38 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CC = c++

SRCS = megaphone.cpp

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	-rm -f $(OBJS)

fclean : clean
	-rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re