/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:58:32 by ngonzo            #+#    #+#             */
/*   Updated: 2021/02/27 11:58:34 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	classPony	*ponyHeap;

	ponyHeap = new classPony();
	ponyHeap->printInfo();
	delete ponyHeap;
	return ;
}

void	ponyOnTheStack()
{
	classPony ponyStack("Marsy", "Pink", "Shetland pony");
	ponyStack.printInfo();
	return ;
}

int		main()
{
	std::cout << "\033[0;32m""Work on the Heap""\033[0m" << std::endl;
	ponyOnTheHeap();
	std::cout << "\033[0;32m""\nWork on the Stack""\033[0m" << std::endl;
	ponyOnTheStack();
	std::cout << "\033[0;32m""\nWork is over""\033[0m" << std::endl;
	return (0);
}