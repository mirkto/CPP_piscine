/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:06:32 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/12 18:06:34 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

#define CLR_WHT_U "\033[4;37m"
#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

class SuperTrap : public NinjaTrap, public FragTrap
{
private:
	SuperTrap();

public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	virtual ~SuperTrap();

	SuperTrap &	operator=(SuperTrap const & src);

	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);

};

#endif
