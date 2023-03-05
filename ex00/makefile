# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 17:15:44 by pcatapan          #+#    #+#              #
#    Updated: 2023/03/05 17:19:53 by pcatapan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJC = $(SRC:%.cpp=%.o)

CC = g++

FLAGS = -Wall -Werror -Wextra

CPPFLAGS = -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(FLAGS) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re