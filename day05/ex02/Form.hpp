#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include <string>

class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeForSign;
	int const			_gradeForExecute;
public:
	Form();
	Form(std::string const name, int const signGrade, int const executeGrade);
	Form(Form const & src );
	virtual ~Form();

	Form &		operator=(Form const & rhs);

	std::string				getName(void) const;
	int						getSignGrade(void) const;
	int						getExecuteGrade(void) const;

	bool					checkSigned(void) const;
	void					beSigned(Bureaucrat const & src);
	virtual void			execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException: public std::exception
	{ virtual const char	*what() const throw(); };

	class GradeTooLowException: public std::exception
	{ virtual const char	*what() const throw(); };

	class UnsignedException: public std::exception
	{ virtual const char* what() const throw(); };
};

std::ostream &			operator<<(std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */