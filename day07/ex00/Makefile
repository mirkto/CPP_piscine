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
