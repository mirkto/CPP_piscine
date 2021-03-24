/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:25:44 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/24 21:17:21 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
{
}

Form::Form(std::string const &name, int const signGrade, int const executeGrade): 
	_name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (_signGrade < 1 || _executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & src )
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
	{
		this->_name = rhs._name;
		this->_signed = rhs._signed;
		this->_signGrade = rhs._signGrade;
		this->_executeGrade = rhs._executeGrade;
	}
	return *this;
}

std::ostream &			operator<<(std::ostream & o, Form const & i )
{
	// if (!i.checkSigned())
	// 	o << i.getName() << ", requires grade " << i.getSignGrade() << " signed" << std::endl;
	// o << i.getName() << ", requires grade " << i.getExecuteGrade() << " executed" << std::endl;
	o << "\033[0;32mForm: '" << i.getName() << "' | "
		<< "Status: '" << (i.checkSigned() ? "Signed'  " : "Unsigned'") << " | "
		<< "SignGrade: '" << i.getSignGrade() << "' | "
		<< "ExecuteGrade: '" << i.getExecuteGrade() << "'\033[0m";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool				Form::checkSigned() const
	{ return(this->_signed); }

void				Form::beSigned(Bureaucrat const & src)
{
	if(src.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char*			Form::GradeTooLowException::what() const throw()
	{ return("Form Exception: Grade too Low"); }

const char*			Form::GradeTooHighException::what() const throw()
	{ return("Form Exception: Grade too High"); }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Form::getName() const
	{ return(this->_name); }

int					Form::getSignGrade() const
	{ return(this->_signGrade); }

int					Form::getExecuteGrade() const
	{ return(this->_executeGrade); }

/* ************************************************************************** */