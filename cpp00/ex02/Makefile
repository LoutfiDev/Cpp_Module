# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 14:31:28 by yloutfi           #+#    #+#              #
#    Updated: 2023/11/09 09:09:21 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CXX = c++

SRCS = tests.cpp Account.cpp

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