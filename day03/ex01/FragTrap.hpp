/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:15:06 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 17:15:08 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

#define CLR_WHT_U "\033[4;37m"
#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_END "\033[0m"

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
	std::string		getHP() const;
	std::string		getEP() const;
	std::string		getName() const;

	void			setDefalt();
};

#endif
