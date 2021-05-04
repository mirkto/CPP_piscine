#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string			_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src );
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &		operator=(RobotomyRequestForm const & rhs);

	std::string			getTarget(void) const;

	void				execute(Bureaucrat const & executor) const;

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */