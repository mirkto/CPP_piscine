#include "iter.hpp"

int		main( void )
{
	std::cout << CLR_YLW " -- check list" CLR_END << std::endl;
	int			tab1[] = {0, 1, 2, 3, 4};
	Awesome		tab2[5];
	iter(tab1, 5, print);
	iter(tab2, 5, print);

	char		arr1[6] = {'H', 'e', 'l', 'l', 'o', '!'};
	Awesome		arr2[4] = { Awesome(0), Awesome(42), Awesome(21), Awesome(-13), };
	std::cout << CLR_YLW " -- char array" CLR_END << std::endl;
	iter(arr1, 5, print);
	std::cout << CLR_YLW " -- Awesome array" CLR_END << std::endl;
	iter(arr2, 4, print);

	return 0;
}