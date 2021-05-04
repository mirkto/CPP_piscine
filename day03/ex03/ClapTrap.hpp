#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

#define CLR_WHT_U "\033[4;37m"
#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
	std::string		_type;

private:
	ClapTrap();

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	virtual ~ClapTrap();
	ClapTrap(std::string name, unsigned int HP, unsigned int maxHP,
	unsigned int EP, unsigned int maxEP, unsigned int level,
	unsigned int meleeAD, unsigned int rangedAD, unsigned int armorRD, std::string type);

	ClapTrap &	operator=(ClapTrap const & src);
	// Normal move
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	// Getters
	std::string		getHP() const;
	std::string		getEP() const;
	std::string		getName() const;
	std::string		getType() const;

};

#endif
