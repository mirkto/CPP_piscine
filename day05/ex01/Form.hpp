/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:25:46 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/24 20:51:06 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string			_name;
	bool				_signed;
	int					_signGrade;
	int					_executeGrade;
	Form();
public:
	Form(std::string const &name, int const signGrade, int const executeGrade);
	Form(Form const & src );
	virtual ~Form();

	Form &		operator=(Form const & rhs );

	std::string				getName(void) const;
	int						getSignGrade(void) const;
	int						getExecuteGrade(void) const;

	bool					checkSigned(void) const;
	void					beSigned(Bureaucrat const & src);

	class GradeTooHighException: public std::exception
	{ virtual const char	*what() const throw(); };

	class GradeTooLowException: public std::exception
	{ virtual const char	*what() const throw(); };

	class FormAlreadySignedException: public std::exception
	{ virtual const char	*what() const throw(); };
};

std::ostream &			operator<<(std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */