#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() { }

Intern::Intern( const Intern & src )
	{ *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=(Intern const & rhs)
{
	if ( this != &rhs )
		(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form		*Intern::makeForm(std::string name, std::string target)
{
	PresidentialPardonForm *president = new PresidentialPardonForm(target);
	RobotomyRequestForm *robotomy = new RobotomyRequestForm(target);
	ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm(target);

	std::string		names[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
	Form			*forms[3] = {president, robotomy, shrubbery};

	for(int i = 0; i < 3; i++)
		if(names[i] != name)
		{
			delete forms[i];
			forms[i] = NULL;
		}
	for(int i = 0; i < 3; i++)
		if(forms[i] != NULL)
		{
			std::cout << "Intern creates " << names[i] <<std::endl;
			return forms[i];
		}
	throw Intern::notValid();
}

const char*		Intern::notValid::what() const throw()
	{ return "\033[0;31m" "Intern Exception: Not valid form" "\033[0m"; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */