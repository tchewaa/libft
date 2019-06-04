# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchewa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 09:51:34 by tchewa            #+#    #+#              #
#    Updated: 2019/06/04 14:52:23 by tchewa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
ARC = ar rc
SRC = *.c
OBJ = *.o

# all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c $(SRC)
		$(ARC) $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
