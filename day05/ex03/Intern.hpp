/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:33:29 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/26 21:41:37 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Intern.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const & src);
	virtual ~Intern();

	Intern &		operator=( Intern const & rhs );

	Form* makeForm(std::string name, std::string target);

	class notValid : public std::exception
		{ const char* what() const throw(); };
};

#endif /* ********************************************************** INTERN_H */