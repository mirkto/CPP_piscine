#include <iostream>
#include <cctype>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int word = 1; word < argc; ++word)
			for (int latter = 0; argv[word][latter] != '\0'; ++latter)
				std::cout << (char)toupper(argv[word][latter]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
