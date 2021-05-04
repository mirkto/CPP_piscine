#include <iostream>
#include <fstream>

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_RED "\033[0;31m"
#define CLR_END "\033[0m"

int		ft_error(std::string str, int i)
{
	std::cout << CLR_RED"--- Wrong input!"CLR_END"\n    ";
	if (i == 0)
		std::cout << str << std::endl;
	else
		std::cout << i << str << std::endl;
	return (-1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (ft_error("Need four arguments!\n"CLR_YLW"./replace filename str1 str2"CLR_END, 0));
	for (int i = 0; i < 4; i++)
		if (argv[i][0] == '\0')
			return (ft_error(" is empty!", i));

	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	inSt(filename);
	if (!inSt.is_open())
		return (ft_error("File not found.", 0));
	std::ofstream	outSt(filename + ".replace");
	if (!outSt.is_open())
		return (ft_error("File cannot replaced.", 0));

	std::string		buff;
	while (std::getline(inSt, buff))
	{
		for (size_t i = buff.find(s1); i != std::string::npos; i = buff.find(s1, i))
		{
			buff.replace(i, s1.length(), s2);
			i += s2.length();
		}
		outSt << buff << std::endl;
	}
	return (0); 
}
