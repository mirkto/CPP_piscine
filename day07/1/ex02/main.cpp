/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:59:48 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/29 13:41:23 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define PRINT(name) std::cout << name << std::endl;

int		main( void )
{
	srand(time(NULL));
	PRINT(CLR_YLW "\n -- Testing int/char/double arrays" CLR_END)
	Array<int>		intArr(7);
	Array<char>		chrArr(7);
	Array<double>	dblArr(7);

	for(int i = 0; i < intArr.size(); i++)
	{
		intArr[i] = rand() % 90 + 10;
		chrArr[i] = rand() % 95 + 32;			// (char >= 32 && char <= 126)
		dblArr[i] = rand() % 90 + 10.42;
	}
	PRINT(CLR_GRN "int -  char - double" CLR_END)
	for(int i = 0; i < intArr.size(); i++)
	{
		std::cout << " " << intArr[i] << " - ";
		std::cout << " '" << chrArr[i] << "'  - ";
		PRINT(dblArr[i])
	}

	PRINT(CLR_YLW "\n -- Testing empty array" CLR_END)
	try {
		PRINT("try create array with size = 0")
		Array<int>		testNull(0);
		PRINT("len of array: " << testNull.size())
		PRINT("try input number in array")
		testNull[0] = 1; }
	catch (std::exception& e) {
		PRINT(e.what()) }

	PRINT(CLR_YLW "\n -- Testing specific size array" CLR_END)
	try {
		PRINT("try create array with size < 0")
		Array<int>		testSpec(-7);
		PRINT("len of array: " << testSpec.size())
		PRINT("try input number in array")
		testSpec[0] = 1; }
	catch (std::exception& e) {
		PRINT(e.what()) }

	return 0;
}