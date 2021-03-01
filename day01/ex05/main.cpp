/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:09:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 17:09:55 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main()
{
	Human	bob;
	std::cout << "\033[0;32m""Test Bob:\n""\033[0m";
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	std::cout << "\033[0;32m""Test bob on Ptr:\n""\033[0m";
	std::cout << bob.identifyPtr() << std::endl;
	std::cout << bob.getBrainPtr().identify() << std::endl;
	
	Human	carl;
	std::cout << "\033[0;32m""\nTest Carl:\n""\033[0m";
	std::cout << carl.identify() << std::endl;
	std::cout << carl.getBrain().identify() << std::endl;

	std::cout << "\033[0;32m""Test Carl on Ptr:\n""\033[0m";
	std::cout << carl.identifyPtr() << std::endl;
	std::cout << carl.getBrainPtr().identify() << std::endl;

	return (0);
}
