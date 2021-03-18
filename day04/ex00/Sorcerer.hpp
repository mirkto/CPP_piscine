/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:40:40 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/15 20:40:42 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string		_name;
	std::string		_title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	Sorcerer &	operator=(Sorcerer const & src);
	virtual ~Sorcerer();

	std::string		introduce() const;
	void			polymorph(Victim const & src) const;
};

std::ostream &		operator<<(std::ostream & out, Sorcerer const & src);

#endif
