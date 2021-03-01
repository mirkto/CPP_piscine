/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:42:18 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 18:42:20 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main()
{
	srand(time(NULL));
	ZombieHorde(8);
	std::cout << CLR_GRN"    By other side:\n"CLR_END;
	ZombieHorde ZH = ZombieHorde(3);
	for (int i = 3; i > 0; i--)
	{
		std::cout << "Zombies left to live " << i << " seconds\n";
		sleep(1);
	}
	return (0);
}
