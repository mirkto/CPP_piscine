NAME = array
WWW = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
HDR = array.hpp

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	clang++ $(WWW) $(SRC)

clean:
	rm -f $(NAME)

re: clean all
