#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_BLU "\033[0;34m"
#define CLR_RED "\033[0;31m"
#define CLR_PRP "\033[0;35m"
#define CLR_END "\033[0m"

#define PRINT(name) std::cout << name << std::endl;

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main()
{
	Bureaucrat				boris("Boris", 1);
	Bureaucrat				eltsin("Eltsin", 150);
	
	ShrubberyCreationForm	shrubberyCreation("<Shrubbery Creation>");
	PresidentialPardonForm	presidentialPardon("<Presidential Pardon>");
	RobotomyRequestForm		robotomyRequest("<Robotomy Request>");
	
	PRINT(presidentialPardon);
	PRINT(shrubberyCreation);
	PRINT(robotomyRequest);
		std::cout << std::endl; // ---
	PRINT(boris);
	PRINT(eltsin);

	PRINT("\n" CLR_YLW " -- Testing execute form \nShrubbery Creation + Boris:" CLR_END)
	try {
		boris.executeForm(shrubberyCreation); }
	catch (std::exception& e) {
		PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing sign Form \nShrubbery Creation + Eltsin:" CLR_END)
	try {
		eltsin.signForm(shrubberyCreation); }
	catch (std::exception& e) {
		PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing sign Form \nShrubbery Creation + Boris:" CLR_END)
	try {
		boris.signForm(shrubberyCreation); }
	catch (std::exception& e) {
		PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing execute form \nShrubbery Creation + Eltsin:" CLR_END)
	try {
		eltsin.executeForm(shrubberyCreation); }
	catch (std::exception& e) {
		PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing execute form \nShrubbery Creation + Boris:" CLR_END)
	try {
		boris.executeForm(shrubberyCreation); }
	catch (std::exception& e) {
		PRINT(e.what()); }

		std::cout << "\n		---" << std::endl; // ---
	PRINT("\n" CLR_YLW " -- Testing sign Form \nRobotomy Request and Presidential Pardon + Boris:" CLR_END)
	try
	{
		boris.signForm(robotomyRequest);
		boris.signForm(presidentialPardon);
	}
	catch (std::exception& e) {
		PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing execute form \nRobotomy Request + Eltsin:" CLR_END)
	try { eltsin.executeForm(robotomyRequest); }
	catch (std::exception& e) { PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing execute form \nRobotomy Request + Boris:" CLR_END)
	try {
		boris.executeForm(robotomyRequest); }
	catch (std::exception& e) {
		PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing execute form \nPresidential Pardon + Eltsin:" CLR_END)
	try {
		eltsin.executeForm(presidentialPardon); }
	catch (std::exception& e) {
		PRINT(e.what()); }

	PRINT("\n" CLR_YLW " -- Testing execute form \nPresidential Pardon + Boris:" CLR_END)
	try {
		boris.executeForm(presidentialPardon); }
	catch (std::exception& e) {
		PRINT(e.what()); }

	return (0);
}