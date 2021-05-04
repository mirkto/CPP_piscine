#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class classPony
{
private:
	std::string	_name;
	std::string	_color;
	std::string	_breed;

	void	_add_info(std::string str);

public:
	classPony();
	classPony(std::string name, std::string color, std::string breed);
	~classPony();

	void	printInfo() const;
};

#endif