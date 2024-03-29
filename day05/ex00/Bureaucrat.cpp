#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() { }

Bureaucrat::Bureaucrat(const Bureaucrat & src ) : _name(src._name)
	{ *this = src; }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=(Bureaucrat const & rhs )
{
	if ( this != &rhs )
		this->_grade = rhs._grade;
	return *this;
}

std::ostream &			operator<<(std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void					Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
		this->_grade++;
}

const char*			Bureaucrat::GradeTooHighException::what() const throw()
	{ return "\033[0;31mBureaucratException: Grade too High\033[0m"; }

const char*			Bureaucrat::GradeTooLowException::what() const throw()
	{ return "\033[0;31mBureaucratException: Grade too Low\033[0m"; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string				Bureaucrat::getName() const
	{ return this->_name; }

int						Bureaucrat::getGrade() const
	{ return this->_grade; }

/* ************************************************************************** */