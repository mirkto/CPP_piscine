#include "span.hpp"

#define PRINT(x) std::cout << x << std::endl;
#define CATCH catch (std::exception &e) { PRINT(e.what()); }

int main()
{
	PRINT(CLR_YLW "\n -- main test" CLR_END)
		Span	s(5);

		s.addNumber(5);
		s.addNumber(3);
		s.addNumber(17);
		s.addNumber(9);
		s.addNumber(11);

		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;

	PRINT(CLR_YLW "\n -- additional test" CLR_END)
	PRINT(CLR_GRN "\ncreate array in 3 len" CLR_END);
	Span test(3);
	PRINT("- add 5");
	test.addNumber(5);
	PRINT("- add 5");
	test.addNumber(5);
	PRINT("shortestSpan:");
	PRINT(test.shortestSpan());
	PRINT("longestSpan:");
	PRINT(test.longestSpan());
	PRINT("- add 9");
	test.addNumber(9);
	PRINT("shortestSpan:");
	PRINT(test.shortestSpan());
	PRINT("longestSpan:");
	PRINT(test.longestSpan());
	try
	{
		PRINT(" try add objects over max len");
		test.addNumber(6);
	}
	CATCH;

	Span big(10000);
	PRINT("\ncreate array in 10000 len");
	try
	{
		PRINT(CLR_GRN " try add objects over max len" CLR_END);
		big.addRange(10000, 0);
		PRINT("i here!");
	}
	CATCH;

	PRINT("shortestSpan:");
	PRINT(big.shortestSpan());
	PRINT("longestSpan:");
	PRINT(big.longestSpan());

	PRINT(CLR_GRN "\n try ncreate objects with len = 0" CLR_END);
	Span zero(0);
	try
	{
		PRINT("shortestSpan:");
		PRINT(zero.shortestSpan());
	}
	CATCH;
	try
	{
		PRINT("longestSpan:");
		PRINT(zero.longestSpan());
	}
	CATCH;
	try
	{
		PRINT("try add objects over max len");
		s.addNumber(6);
	}
	CATCH;

	PRINT(CLR_GRN "\n try ncreate objects with len < 0" CLR_END);
	try
	{
		Span subzero(-96);
		PRINT(" try add objects over max len");
		s.addNumber(6);
	}
	CATCH;

		
	PRINT(CLR_GRN "\n create by other constructor" CLR_END);
	PRINT("create array(0,5,15,25,27)");
	std::vector<int>	array;
	array.push_back(0);
	array.push_back(5);
	array.push_back(15);
	array.push_back(25);
	array.push_back(27);
	// PRINT(" - " << *(t1.begin() + 4) )
	// PRINT(" - " << *(t1.end() - 1) )
	PRINT("create newArray ");
	Span newArray(5);
	PRINT("add number in newArray from array.begin(), array.end()");
	newArray.addNumber(array.begin(), array.end());
	PRINT("shortestSpan:");
	PRINT(newArray.shortestSpan());
	PRINT("longestSpan:");
	PRINT(newArray.longestSpan());
	
	PRINT(CLR_GRN "\n try add more number" CLR_END);
	try
	{
		newArray.addNumber(array.begin(), array.end());
	}
	CATCH;

	PRINT(CLR_GRN "\n try add with wrong index" CLR_END);
	try
	{
		newArray.addNumber(array.end(), array.begin());
	}
	CATCH;

	return (0);
}