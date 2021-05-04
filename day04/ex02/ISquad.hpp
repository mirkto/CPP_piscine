#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}

	virtual int		getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int unit) const = 0;

	virtual int		push(ISpaceMarine* numberUnit) = 0;

	virtual void			rollCall() const = 0;//добавлено для демонстрации работы интерфейса
};

#endif