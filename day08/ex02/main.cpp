# define CLR_GRN "\033[0;32m"
# define CLR_YLW "\033[0;33m"
# define CLR_BLU "\033[0;34m"
# define CLR_RED "\033[0;31m"
# define CLR_PRP "\033[0;35m"
# define CLR_END "\033[0m"

#include <iostream>
#include "mutantstack.hpp"

#define PRINT(x) std::cout << x << std::endl;

int main()
{
	PRINT(CLR_YLW "\n -- main test" CLR_END)
	
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	// return (0);
	
	PRINT(CLR_YLW "\n -- additional test" CLR_END)
	for (int i = 0; i <= 4; i++)
		mstack.pop();
	for (int i = 0;i <= 13;i++)
		mstack.push(i);

	MutantStack<int>::iterator iit = mstack.begin();
	MutantStack<int>::iterator iite = mstack.end();
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	MutantStack<int>::const_iterator ciit = mstack.begin();
	MutantStack<int>::const_iterator ciite = mstack.end();
	MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.rend();

	PRINT(CLR_GRN "testing iterator" CLR_END)
	for (; iit != iite; iit++)
		PRINT(*iit)
	PRINT(CLR_GRN "testing reverse_iterator" CLR_END)
	for (; rit != rite; rit++)
		PRINT(*rit)
	PRINT(CLR_GRN "testing const_iterator" CLR_END)
	for (; ciit != ciite; ciit++)
		PRINT(*ciit)
	PRINT(CLR_GRN "testing const_reverse_iterator" CLR_END)
	for (; crit != crite; crit++)
		PRINT(*crit)

	return (0);
}
