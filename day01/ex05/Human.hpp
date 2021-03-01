/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:10:18 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 17:10:20 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	Brain	_Brain;
	Brain	*_BrainPtr;

public:
	Human();
	~Human();

	Brain			getBrain();
	std::string		identify();
	Brain			&getBrainPtr();
	std::string		identifyPtr();
};

#endif
