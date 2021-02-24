#include <iostream>
#include "Sample.class.hpp"

int		main(void)
{
	Sample		instance;
	Sample *	instanceptr = &instance;

	int			Sample::*p = NULL;
	void		(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instanceptr->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instanceptr->*f)();

	return (0);
}