#include <iostream>
#include <typeinfo>
#include <exception>

class Parent	{ public: virtual ~Parent(void) {} };
class Child1: public Parent {};
class Child2: public Parent {};

int			main (void)
{
	Child1		a;			// Reference value
	Parent *	b = &a;		// Implicit upcast -> Ok

	// Explicit downcast -> Suspens...
	Child1 *	c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
		std::cout << "Conversion is NOT Ok" << std::endl;
	else
		std::cout << "Conversion is Ok" << std::endl;
	
	// Explicit downcast -> Suspens...
	try
	{
		Child2 &	d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is Ok" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT Ok: " << bc.what() << std::endl;
		return 0;
	}

	return 0;	
}
// ----------------------
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <sys/time.h> //getRandomInt
void identify_from_reference( Base & p)
{
    try
    {
        A a = dynamic_cast<A&> (p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        B b = dynamic_cast<B&> (p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        C c = dynamic_cast<C&> (p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
}
void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*> (p) != 0)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*> (p) != 0)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*> (p) != 0)
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown class" << std::endl;
}
static int getRandomInt(void)
{
    struct timeval t;
    gettimeofday(&t, NULL);
    return static_cast<int> (t.tv_usec);
}
Base * generate(void)
{
    int randInt;
    int object_id;
    randInt = getRandomInt();
    srand(randInt);
    object_id = rand() % 3;
    switch (object_id)
    {
        case 0:
            std::cout << "A type generated" << std::endl;
            return new A();
        case 1:
            std::cout << "B type generated" << std::endl;
            return new B();
        case 2:
            std::cout << "C type generated" << std::endl;
            return new C();
        default:
            std::cout << "A type generated" << std::endl;
            return new A();
    }
}
int main(void)
{
    Base *b;
    b = generate();
    std::cout << "---identify by pointer---" << std::endl;
    identify_from_pointer(b);
    std::cout << "---identify by reference---" << std::endl;
    identify_from_reference(*b);
    delete b;
    return 0;
}