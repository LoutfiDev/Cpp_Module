# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 15:21:25 by yloutfi           #+#    #+#              #
#    Updated: 2023/08/24 20:59:48 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CC = c++

SRCS = Main.cpp PhoneBook.cpp Contact.cpp

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