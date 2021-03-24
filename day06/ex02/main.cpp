/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:58:57 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/24 13:55:25 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

class Base	{ public: virtual ~Base(void) {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void) // ---
{
	system("clear");
	std::cout << "\033[0;33m\n -- Start generate random class -- \033[0m" << std::endl;
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Generated type A" << std::endl;
			return new A();
		case 1:
			std::cout << "Generated type B" << std::endl;
			return new B();
		case 2:
			std::cout << "Generated type C" << std::endl;
			return new C();
		default:
			std::cout << "\033[0;31m !! Something went wrong !! \033[0m" << std::endl;
			break;
	}
	return new Base();
}

void identify_from_pointer(Base * p) // ---
{
	std::cout << "\033[0;33m\n -- Start identify from pointer -- \033[0m" << std::endl;
	if (dynamic_cast<A *> (p) != 0)
		std::cout << "from pointer type - A" << std::endl;
	else
		std::cout << "\033[0;31m !! A - not Ok !! \033[0m" << std::endl;
	if (dynamic_cast<B *> (p) != 0)
		std::cout << "from pointer type - B" << std::endl;
	else
		std::cout << "\033[0;31m !! B - not Ok !! \033[0m" << std::endl;
	if (dynamic_cast<C *> (p) != 0)
		std::cout << "from pointer type - C" << std::endl;
	else
		std::cout << "\033[0;31m !! C - not Ok !! \033[0m" << std::endl;
}

void identify_from_reference(Base & p) // ---
{
	std::cout << "\033[0;33m\n -- Start identify from reference -- \033[0m" << std::endl;
	try
	{
		A a = dynamic_cast<A &> (p);
		std::cout << "from reference type - A" << std::endl;
	}
	catch(std::bad_cast &bc)
		{ std::cout << "\033[0;31m !! A - " << bc.what() << " !! \033[0m" << std::endl; }
	try
	{
		B b = dynamic_cast<B &> (p);
		std::cout << "from reference type - B" << std::endl;
	}
	catch(std::bad_cast &bc)
		{ std::cout << "\033[0;31m !! B - " << bc.what() << " !! \033[0m" << std::endl; }
	try
	{
		C c = dynamic_cast<C &> (p);
		std::cout << "from reference type - C" << std::endl;
	}
	catch(std::bad_cast &bc)
		{ std::cout << "\033[0;31m !! C - " << bc.what() << " !! \033[0m" << std::endl; }
	std::cout << std::endl;
}

int			main()
{
	Base *p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	delete p;
	return (0);
}