/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:40:04 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/15 20:40:05 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"


class Peon : public Victim
{
private:
	Peon();
public:
	virtual ~Peon();
	Peon(std::string name);

	virtual void	getPolymorphed() const;
};

#endif
