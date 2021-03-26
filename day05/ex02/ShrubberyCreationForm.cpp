/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:14:06 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/25 20:14:40 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
	{ this->_target = "default"; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
	{ this->_target = target; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src)
	{ *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &			ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if ( this != &rhs )
		this->_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->checkSigned())
	{
		if (executor.getGrade() <= this->getExecuteGrade())
		{
			std::ofstream	out(this->_target + "_shrubbery");
			if (out)
			{
				out <<
				"___☆_________*_________☆___\n"
				"_______☆____*o*____☆_______\n"
				"__☆________*o*o*_______☆___\n"
				"______☆___*o*o*o*___☆______\n"
				"____☆____*o*o*o*o*_____☆___\n"
				"________*o*o*o*o*o*________\n"
				"___________|| ||___________\n"
				<< std::endl;
			}
			out.close();
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

std::string		ShrubberyCreationForm::getTarget(void) const
	{ return this->_target; }

/* ************************************************************************** */