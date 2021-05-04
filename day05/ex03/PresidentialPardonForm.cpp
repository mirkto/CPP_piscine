#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5)
	{ this->_target = "default"; }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
	{ this->_target = target; }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	{ *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
		this->_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->checkSigned())
	{
		if (executor.getGrade() <= this->getExecuteGrade())
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw GradeTooLowException();
	}
	else
		throw UnsignedException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		PresidentialPardonForm::getTarget(void) const
	{ return this->_target; }

/* ************************************************************************** */