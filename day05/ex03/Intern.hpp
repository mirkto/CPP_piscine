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