#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
// # include <string>

class FragTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;

	FragTrap();

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap &	operator=(FragTrap const & src);
	// Normal move
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	// Special move
	void	vaulthunter_dot_exe(std::string const & target);
	// Getters
	unsigned int	getHP() const;
	unsigned int	getEP() const;
	std::string		getName() const;
};

#endif