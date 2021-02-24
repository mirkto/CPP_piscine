#include <iostream>
#include "Sample.class.hpp"

int		main()
{
	Sample	instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(-21);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	instance.stB(21);
	std::cout << "instance.gtB(): " << instance.gtB() << std::endl;

	return (0);
}
