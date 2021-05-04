#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
protected:
	std::string		_name;
public:
	Victim();
	Victim(std::string name);
	Victim(Victim const & src);
	Victim &	operator=(Victim const & src);
	virtual ~Victim();

	std::string		introduce() const;
	virtual void	getPolymorphed() const;
};

std::ostream &		operator<<(std::ostream & out, Victim const & src);

#endif
