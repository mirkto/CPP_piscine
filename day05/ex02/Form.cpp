#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("name"), _signed(false), _gradeForSign(1), _gradeForExecute(1) { }

Form::Form(std::string const name, int const signGrade, int const executeGrade) : 
	_name(name), _signed(false), _gradeForSign(signGrade), _gradeForExecute(executeGrade)
{
	if (_gradeForSign < 1 || _gradeForExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeForSign > 150 || _gradeForExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & src) : 
	_name(src._name), _gradeForSign(src._gradeForSign), _gradeForExecute(src._gradeForExecute)
	{ *this = src; }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
		this->_signed = rhs._signed;
	return *this;
}

std::ostream &			operator<<(std::ostream & o, Form const & i )
{
	o	<< "\033[0;32m"
		<< "Form: '" << i.getName() << "' | "
		<< "Status: '" << (i.checkSigned() ? "Signed'  " : "Unsigned'") << " | "
		<< "SignGrade: '" << i.getSignGrade() << "' | "
		<< "ExecuteGrade: '" << i.getExecuteGrade()
		<< "'\033[0m";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool				Form::checkSigned() const
	{ return(this->_signed); }

void				Form::beSigned(Bureaucrat const & src)
{
	if(src.getGrade() <= this->_gradeForSign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char*			Form::GradeTooLowException::what() const throw()
	{ return "\033[0;31m" "Form Exception: Grade too Low" "\033[0m"; }

const char*			Form::GradeTooHighException::what() const throw()
	{ return "\033[0;31m" "Form Exception: Grade too High" "\033[0m"; }

const char* Form::UnsignedException::what() const throw()
	{ return  "\033[0;31m" "Form Exception: Form not signed" "\033[0m"; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Form::getName() const
	{ return(this->_name); }

int					Form::getSignGrade() const
	{ return(this->_gradeForSign); }

int					Form::getExecuteGrade() const
	{ return(this->_gradeForExecute); }

/* ************************************************************************** */