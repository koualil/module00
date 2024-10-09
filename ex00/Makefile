# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 19:09:35 by mkoualil          #+#    #+#              #
#    Updated: 2024/10/07 19:27:37 by mkoualil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = Megaphone.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

NAME = megaphone
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)
					
%.o : %.c
				c++ -c $(CFLAGS) $< -o $@

clean:	
				$(RM) $(OBJ_FILES)

				
fclean:			clean
				$(RM) $(NAME)
					
re:				fclean $(NAME)