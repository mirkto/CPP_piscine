# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 15:27:02 by ngonzo            #+#    #+#              #
#    Updated: 2021/03/23 19:05:46 by ngonzo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization
WWW = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Serialization.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(WWW) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
