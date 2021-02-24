# include <iostream>
# include <unistd.h>
# include <string>
# include <iomanip>
# include <cstdlib>
using namespace std;

void	Sampleclass::_ft_splite(int i)
{
	string	tmp = this->list[i];
	char	*str = new char[tmp.length() + 1];
	std::strcpy(str, tmp.c_str());
	char	*p = std::strtok(str, "|");
	while (p != 0)
	{
		std::cout << std::setw(10) << p << "|";
		p = strtok(NULL, "|");
	}
	delete[] str;
}