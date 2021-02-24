#include <iostream>
#include "Sample.class.hpp"

int		main()
{
	Sample	instance;

	instance.publicFoo = -404;
	std::cout << instance.publicFoo << std::endl;
	instance.publicBar();

	// instance._privateFoo = -404;
	// std::cout << instance._privateFoo << std::endl;
	// instance._privateBar();

	return (0);
}
