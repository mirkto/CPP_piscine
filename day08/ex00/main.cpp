#include "easyfind.hpp"
#include <vector>

#define PRINT(x) std::cout << x << std::endl;
#define CATCH catch (std::exception &e) { PRINT(e.what()); }

int main()
{
	PRINT(CLR_YLW "\nCreate int array :" CLR_END)
	std::vector<int>	arr;
	for (int i = 0;i < 10;i++)
		arr.push_back(i);
	try
	{
		PRINT(easyfind(arr, 5));
		PRINT(easyfind(arr, 10));
	}
	CATCH;

	srand(time(NULL));
	PRINT(CLR_YLW "\nCreate char array :" CLR_END)
	std::vector<char>	arr2;
	for (int i = 0; i < 33; i++)
	{
		arr2.push_back(rand() % (122 - 97 + 1) + 97);
		std::cout << arr2[i] << ", ";
	}
	PRINT(CLR_GRN "\nTry find in char array 'a', 'b', 'c', 'z' :" CLR_END)
	try {
		PRINT(easyfind(arr2, 'a') << " - " << static_cast<char>(easyfind(arr2, 'a'))); }
	CATCH;
	try {
		PRINT(easyfind(arr2, 'b') << " - " << static_cast<char>(easyfind(arr2, 'b'))); }
	CATCH;
	try {
		PRINT(easyfind(arr2, 'c') << " - " << static_cast<char>(easyfind(arr2, 'c'))); }
	CATCH;
	try {
		PRINT(easyfind(arr2, 'z') << " - " << static_cast<char>(easyfind(arr2, 'z'))); }
	CATCH;
	return (0);
}