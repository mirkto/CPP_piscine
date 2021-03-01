/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:18:33 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 19:18:35 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string		*panther = new std::string("String panther");

	std::cout << *panther << std::endl;

	delete panther;
}

int		main()
{
	memoryLeak();
	while(1)
		;
	return (0);
}
