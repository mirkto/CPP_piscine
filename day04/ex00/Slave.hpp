/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:40:04 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/15 20:40:05 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLAVE_HPP
# define SLAVE_HPP

# include <iostream>
# include "Victim.hpp"


class Slave : public Victim
{
private:
	Slave();
public:
	virtual ~Slave();
	Slave(std::string name);

	virtual void	getPolymorphed() const;
};

#endif
