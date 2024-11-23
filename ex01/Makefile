# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 19:02:34 by mkoualil          #+#    #+#              #
#    Updated: 2024/11/16 23:35:44 by mkoualil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_FILES = Contact.cpp PhoneBook.cpp input_users.cpp  main.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

NAME = PhoneBook
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)
					
%.o : %.cpp  PhoneBook.hpp Contact.hpp PhoneBook.h
				c++ -c $(CFLAGS) $< -o $@

clean:	
				$(RM) $(OBJ_FILES)

				
fclean:			clean
				$(RM) $(NAME)
					
re:				fclean $(NAME)