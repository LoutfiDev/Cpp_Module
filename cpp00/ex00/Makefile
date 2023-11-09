# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 12:38:44 by yloutfi           #+#    #+#              #
#    Updated: 2023/11/09 09:09:39 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CXX = c++

SRCS = megaphone.cpp

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