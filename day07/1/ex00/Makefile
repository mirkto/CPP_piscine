# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 15:27:02 by ngonzo            #+#    #+#              #
#    Updated: 2021/03/28 19:00:20 by ngonzo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
WWW = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
HDR = whatever.hpp

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	clang++ $(WWW) $(SRC)

clean:
	rm -f $(NAME)

re: clean all
