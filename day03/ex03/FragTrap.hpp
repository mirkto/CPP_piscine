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
# include "ClapTrap.hpp"

#define CLR_WHT_U "\033[4;37m"
#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_END "\033[0m"

class FragTrap : public ClapTrap
{
private:
	FragTrap();

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	virtual ~FragTrap();

	FragTrap &	operator=(FragTrap const & src);

	// Special move
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
