/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:57:51 by ngonzo            #+#    #+#             */
/*   Updated: 2021/02/27 11:57:55 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class classPony
{
private:
	std::string	_name;
	std::string	_color;
	std::string	_breed;

	void	_add_info(std::string str);

public:
	classPony();
	classPony(std::string name, std::string color, std::string breed);
	~classPony();

	void	printInfo() const;
};

#endif