# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 15:45:14 by fdarrin           #+#    #+#              #
#    Updated: 2021/05/26 15:45:17 by fdarrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
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
