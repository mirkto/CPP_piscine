/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:07:30 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/23 19:11:09 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include "main.hpp"

class Serialization
{

public:
	Serialization();
	Serialization(Serialization const & src );
	virtual ~Serialization();

	Serialization &		operator=(Serialization const & rhs );

	std::string		randStr();
	void *			serialize(void);
	Data *			deserialize(void * raw);

private:
	Data *			_data;
	void *			_raw;

};

#endif