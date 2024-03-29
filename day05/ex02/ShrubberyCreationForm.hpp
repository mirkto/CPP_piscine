#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string			_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & rhs);

	std::string			getTarget(void) const;

	void				execute(Bureaucrat const & executor) const;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */