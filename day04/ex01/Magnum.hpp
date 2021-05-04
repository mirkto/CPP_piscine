#ifndef MAGNUM_HPP
# define MAGNUM_HPP

# include "AWeapon.hpp"

class Magnum : public AWeapon
{

public:
	Magnum();
	Magnum(Magnum const & src);
	Magnum &	operator=(Magnum const & src);
	virtual ~Magnum();
	
	virtual void	attack() const;
};

#endif