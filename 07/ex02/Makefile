# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/17 16:31:35 by fdarrin           #+#    #+#              #
#    Updated: 2021/06/17 16:31:37 by fdarrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Array.hpp

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp $(HEADER)
		$(CC) -c $(FLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:
		rm -rf $(OBJ) $(NAME)

re:		fclean all

.PHONY: clean fclean all re
