#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <unistd.h>

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_RED "\033[0;31m"
#define CLR_END "\033[0m"

class Zombie
{
private:
	std::string		_name;
	std::string		_type;

public:
	Zombie();
	Zombie(std::string name, std::string type);
	Zombie(std::string name, std::string type, std::string words);
	~Zombie();

	void	announce(std::string words) const;
	void	setType(std::string type);
	void	setName(std::string name);
};

#endif
