# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdarrin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 15:56:36 by fdarrin           #+#    #+#              #
#    Updated: 2021/05/15 15:56:39 by fdarrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

FLAGS = -Wall -Wextra -Werror

HEADER = Contacts.hpp Phonebook.hpp

SRC = main.cpp Contacts.cpp Phonebook.cpp

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
