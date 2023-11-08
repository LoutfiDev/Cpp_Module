# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 15:21:25 by yloutfi           #+#    #+#              #
#    Updated: 2023/11/08 14:50:46 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CXX = c++

SRCS = Main.cpp PhoneBook.cpp Contact.cpp

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