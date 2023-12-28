# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:30:30 by yloutfi           #+#    #+#              #
#    Updated: 2023/12/27 12:50:22 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
CXX = c++

SRCS = main.cpp BitcoinExchange.cpp 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	-rm -f $(OBJS)

fclean : clean
	-rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re