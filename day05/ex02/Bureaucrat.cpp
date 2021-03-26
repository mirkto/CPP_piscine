/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:01:29 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/25 19:24:17 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void					Bureaucrat::signForm(Form & form)
{
	if(form.checkSigned())
		std::cout << this->_name << " cannot sign " << form.getName() << " because it is signed!" << std::endl;
	else if(form.getSignGrade() < this->_grade)
		std::cout << this->_name << " cannot sign " << form.getName() << " because grade is too low!" << std::endl;
	else
	{
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char*				Bureaucrat::GradeTooHighException::what() const throw()
	{ return "\033[0;31m" "Bureaucrat Exception: Grade too High" "\033[0m"; }

const char*				Bureaucrat::GradeTooLowException::what() const throw()
	{ return "\033[0;31m" "Bureaucrat Exception: Grade too Low" "\033[0m"; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string				Bureaucrat::getName() const
	{ return this->_name; }

int						Bureaucrat::getGrade() const
	{ return this->_grade; }

/* ************************************************************************** */