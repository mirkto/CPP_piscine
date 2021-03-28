# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 15:27:02 by ngonzo            #+#    #+#              #
#    Updated: 2021/03/28 19:00:15 by ngonzo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
WWW = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
HDR = iter.hpp

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	clang++ $(WWW) $(SRC)

clean:
	rm -f $(NAME)

re: clean all
