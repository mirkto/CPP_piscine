#include "Sample.class.hpp"

int		main()
{
	Sample	test;
	float	z = 21.12;
	
	test.bar(42);
	test.bar('A');
	test.bar(z);
	test.bar(test);
	return (0);
}