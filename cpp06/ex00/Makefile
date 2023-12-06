# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 15:07:52 by yloutfi           #+#    #+#              #
#    Updated: 2023/12/02 11:34:28 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = convert
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
CXX = c++

SRCS = main.cpp ScalarConverter.cpp

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