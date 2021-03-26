/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:14:03 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/25 19:34:47 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45)
	{ _target = "default"; }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
	{ _target = target; }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	{ *this = src; }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
		this->_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	if (this->checkSigned())
	{
		if (executor.getGrade() <= this->getExecuteGrade())
		{
			if (rand() % 2)
				std::cout << _target << " has been robotomized successfully" << std::endl;
			else
				std::cout << _target << " the robotomization has failed" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw UnsignedException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		RobotomyRequestForm::getTarget(void) const
	{ return this->_target; }

/* ************************************************************************** */