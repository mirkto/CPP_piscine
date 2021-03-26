/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:59:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/25 11:53:43 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

#define PRINT(name) std::cout << name << std::endl;

#include "Bureaucrat.hpp"

int		main()
{
	PRINT(CLR_YLW " -- Testing incrementGrade/decrementGrade:" CLR_END)
	Bureaucrat boris("Boris", 21);
	PRINT(boris)
	boris.incrementGrade();
	PRINT(boris)
	boris.decrementGrade();
	PRINT(boris)

	PRINT("\n" CLR_YLW " -- Testing copy:" CLR_END)
	Bureaucrat test_copy(boris);
	PRINT(test_copy)

	PRINT("\n" CLR_YLW " -- Testing assignation:" CLR_END)
	Bureaucrat eltsin("Eltsin", 42);
	PRINT(eltsin)
	eltsin = boris;
	PRINT(eltsin)

	PRINT("\n" CLR_YLW " -- Testing creating with wrong big grade:" CLR_END)
	try
	{
		Bureaucrat test_big_grade("test_big_grade", 0);
		PRINT(test_big_grade)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}

	PRINT("\n" CLR_YLW " -- Testing creating with wrong low grade:" CLR_END)
	try
	{
		Bureaucrat test_low_grade("test_low_grade", 1000);
		PRINT(test_low_grade)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}

	PRINT("\n" CLR_YLW " -- Testing wrong incrementGrade:" CLR_END)
	try
	{
		Bureaucrat boris("Boris", 1);
		PRINT(boris)
		boris.incrementGrade();
		PRINT(boris)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}
	
	PRINT("\n" CLR_YLW " -- Testing wrong decrementGrade:" CLR_END)
	try
	{
		Bureaucrat boris("Boris", 150);
		PRINT(boris)
		boris.decrementGrade();
		PRINT(boris)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}

	return (0);
}