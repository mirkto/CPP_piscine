#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src );
	virtual ~Bureaucrat();
	Bureaucrat &		operator=( Bureaucrat const & rhs );

	std::string				getName() const;
	int						getGrade() const;

	void					incrementGrade();
	void					decrementGrade();
	void					signForm(Form& form);
	void					executeForm(Form const & form);

	class GradeTooHighException: public std::exception
	{ virtual const char	*what() const throw(); };
	
	class GradeTooLowException: public std::exception
	{ virtual const char	*what() const throw(); };
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */