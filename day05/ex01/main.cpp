/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:59:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/25 16:07:43 by ngonzo           ###   ########.fr       */
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
	Bureaucrat boris("Boris", 100);

	PRINT("\n" CLR_YLW " -- Testing form and form.sign :" CLR_END)
	Form formA("Form A", 100, 50);
	PRINT(formA)
	PRINT(boris)
	formA.beSigned(boris);
	PRINT(formA)

	PRINT("\n" CLR_YLW " -- Testing wrong Bureaucrat.sign :" CLR_END)
	PRINT(boris)
	Form formB("Form B", 99, 50);
	PRINT(formB)
	try {
		boris.signForm(formB); }
	catch(std::exception const &e) {
		PRINT(e.what()) }
	std::cout << formB << std::endl;

	PRINT("\n" CLR_YLW " -- Testing double Bureaucrat.sign :" CLR_END)
	Form formC("Form C", 101, 50);
	PRINT(formC)
	PRINT(boris)
	boris.signForm(formC);
	PRINT(formC)
	try {
		boris.signForm(formC); }
	catch(std::exception const &e) {
		PRINT(e.what()) }
	PRINT(formC)

	PRINT("\n" CLR_YLW " -- Testing Exceptions :" CLR_END)
	PRINT(CLR_YLW "1 - wrong form.sign:" CLR_END)
	try
	{
		Form formException("form E", 99, 50);
		PRINT(formException)
		PRINT(boris)
		formException.beSigned(boris);
		PRINT(formException)
	}
	catch(std::exception const &e) {
		PRINT(e.what()) }

	PRINT("\n" CLR_YLW "2 - create wrong Grade For Sign:" CLR_END)
	try
	{
		PRINT("Try create wrong form with Grade For Sign-1000")
		Form formException("form E", 1000, 50);
		PRINT(formException)
	}
	catch(std::exception const &e) {
		PRINT(e.what()) }

	PRINT("\n" CLR_YLW "3 - create wrong gradeForSign:" CLR_END)
	try
	{
		PRINT("Try create wrong form with Grade For Sign-0")
		Form formException("form E", 0, 50);
		PRINT(formException)
	}
	catch(std::exception const &e) {
		PRINT(e.what()) }

	PRINT("\n" CLR_YLW "4 - create wrong gradeForExecute:" CLR_END)
	try
	{
		PRINT("Try create wrong form with Grade For Execute-1000")
		Form formException("form E", 100, 1000);
		PRINT(formException)
	}
	catch(std::exception const &e) {
		PRINT(e.what()) }

	PRINT("\n" CLR_YLW "5 - create wrong Grade For Execute:" CLR_END)
	try
	{
		PRINT("Try create wrong form with Grade For Execute-0")
		Form formException("form E", 100, 0);
		PRINT(formException)
	}
	catch(std::exception const &e) {
		PRINT(e.what()) }

	return (0);
}