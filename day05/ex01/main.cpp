/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:59:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/24 21:05:37 by ngonzo           ###   ########.fr       */
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
	Bureaucrat eltsin("Eltsin", 21);
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

	// ------------------------------------ ex01

	PRINT("\n" CLR_YLW " -- Testing form and signed:" CLR_END)
	Form taxes("Taxes", 100, 50);
	PRINT(taxes)
	taxes.beSigned(boris);
	PRINT(taxes)

	PRINT("\n" CLR_YLW " -- Testing wrong signing from dmitry:" CLR_END)
	Form nda("NDA", 99, 50);
	PRINT(nda)
	try
	{
		boris.signForm(nda);
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}
	std::cout << nda << std::endl;

	PRINT("\n" CLR_YLW " -- Testing wrong signing for other_paper:" CLR_END)
	Form otherpaper("Other Paper", 101, 50);
	PRINT(otherpaper)
	boris.signForm(otherpaper);
	PRINT(otherpaper)
	try
	{
		boris.signForm(otherpaper);
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}
	PRINT(otherpaper)

	PRINT("\n" CLR_YLW " -- Testing wrong signing for form Exception:" CLR_END)
	try
	{
		Form formException("NDA", 99, 50);
		PRINT(formException)
		formException.beSigned(boris);
		PRINT(formException)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}

	PRINT("\n" CLR_YLW " -- Testing wrong signing for Important_Form:" CLR_END)
	try
	{
		Form formException("Important_Form", 1000, 50);
		PRINT(formException)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}

	PRINT("\n" CLR_YLW " -- Testing wrong signing for Important_Form:" CLR_END)
	try
	{
		Form formException("Important_Form", 0, 50);
		PRINT(formException)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}

	PRINT("\n" CLR_YLW " -- Testing wrong signing for Important_Form:" CLR_END)
	try
	{
		Form formException("Important_Form", 100, 1000);
		PRINT(formException)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}

	PRINT("\n" CLR_YLW " -- Testing wrong signing for Important_Form:" CLR_END)
	try
	{
		Form formException("Important Form", 100, 0);
		PRINT(formException)
	}
	catch(std::exception const &e)
	{
		PRINT(e.what())
	}


	return (0);
}