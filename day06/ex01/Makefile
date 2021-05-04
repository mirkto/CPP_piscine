NAME = serialization
WWW = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Serialization.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(WWW) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
