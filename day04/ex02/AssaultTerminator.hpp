#ifndef ASSAULTTERMINATOR__HPP
# define ASSAULTTERMINATOR__HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & src);
	AssaultTerminator &		operator=(AssaultTerminator const  & src);

	virtual ~AssaultTerminator();

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif