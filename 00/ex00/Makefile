# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 12:27:59 by fdarrin           #+#    #+#              #
#    Updated: 2021/05/15 12:28:12 by fdarrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

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
