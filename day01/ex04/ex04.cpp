/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:13:50 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/01 18:13:53 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_RED "\033[0;31m"
#define CLR_END "\033[0m"

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << CLR_GRN << *(ptr) << CLR_END;
	std::cout << CLR_YLW << ref << CLR_END;
	return (0);
}
