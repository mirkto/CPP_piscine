/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:59:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/26 21:20:31 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

#define PRINT(name) std::cout << name << std::endl;
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main()
{
	// PRINT("\n" CLR_YLW " -- Testing wrong Bureaucrat.sign :" CLR_END)
	// PRINT(boris)
	// Form formB("Form B", 99, 50);
	// PRINT(formB)
	// try {
	// 	boris.signForm(formB); }
	// catch(std::exception const &e) {
	// 	PRINT(e.what()) }
	// std::cout << formB << std::endl;

	// 	std::cout << std::endl; // ---
	// PRINT(boris);
	// PRINT(eltsin);

	// PRINT("\n" CLR_YLW " -- Testing execute form \nShrubbery Creation + Boris:" CLR_END)
	// try {
	// 	boris.executeForm(shrubberyCreation); }
	// catch (std::exception& e) {
	// 	PRINT(e.what()); }

	// Bureaucrat				boris("Boris", 1);
	// Bureaucrat				eltsin("Eltsin", 150);
	
	// ShrubberyCreationForm	shrubberyCreation("<Shrubbery Creation>");
	// PresidentialPardonForm	presidentialPardon("<Presidential Pardon>");
	// RobotomyRequestForm		robotomyRequest("<Robotomy Request>");

		std::cout << CLR_YLW "\n -- Subject main" CLR_END << std::endl; // ---
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	}
		std::cout << CLR_YLW "\n -- Additional main" CLR_END << std::endl; // ---
	{
		Bureaucrat				boris("Boris", 1);
		Intern					natasha;

		std::cout << CLR_YLW "\n -Сreating forms" CLR_END << std::endl;
		Form* formA = natasha.makeForm("Shrubbery Creation", "<Eltsin>");
		Form* formB = natasha.makeForm("Robotomy Request", "<Eltsin>");
		Form* formC = natasha.makeForm("Presidential Pardon", "<Eltsin>");

		std::cout << CLR_YLW "\n -Сreating not valid forms" CLR_END << std::endl;
		try {
			Form* formD = natasha.makeForm("Unknow", "Eltsin");
			std::cout << formD->getName() << std::endl;
			delete formD; }
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n'; }
		try {
			Form* formE = natasha.makeForm("robotomy request", "Eltsin");
			std::cout << formE->getName() << std::endl;
			delete formE; }
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n'; }

		std::cout << CLR_YLW "\n -Starting signed form" CLR_END << std::endl;
		boris.signForm(*formA);
		boris.signForm(*formB);
		boris.signForm(*formC);

		std::cout << CLR_YLW "\n -Starting execute form" CLR_END << std::endl;
		boris.executeForm(*formA);
		boris.executeForm(*formB);
		boris.executeForm(*formC);

		delete formA;
		delete formB;
		delete formC;
		while(1);
	}
}