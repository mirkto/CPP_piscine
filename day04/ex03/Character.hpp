#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string		_name;
	AMateria*		_materia[4];
	int				_equip;

public:
	Character() {}
	Character(std::string const &name);
	Character(Character const & src);
	Character &		operator=(Character const & src);
	virtual ~Character();


	std::string const &		getName() const;
	void					equip(AMateria* materia);
	void					unequip(int materiaNumber);
	void					use(int materiaNumber, ICharacter& target);

	unsigned int			getXP(int materiaNumber) const;// для того чтобы узанть сколько опыта у материи
};

#endif