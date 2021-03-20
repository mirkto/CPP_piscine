#ifndef NECRON_HPP
# define NECRON_HPP

# include "ISpaceMarine.hpp"

class	Necron : public ISpaceMarine
{
private:
	std::string		_name;

public:
	Necron();
	Necron(std::string name);
	Necron(Necron const & src);
	Necron &		operator=(Necron const  & src);
	
	virtual ~Necron();

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;

	std::string				getName() const;// не будет работать, так как этой функции нет в интерфейсе
};

#endif