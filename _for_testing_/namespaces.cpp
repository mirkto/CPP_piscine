#include <stdio.h>
#include <iostream>

int		g_var = 1;
int		f(void) {return 2;}

namespace	Foo
{
	int		g_var = 3;
	int		f(void) {return 4;}
}

namespace	Bar
{
	int		g_var = 5;
	int		f(void) {return 6;}
}

namespace	Muf = Bar;

int			ft_namespace(void)
{
	printf("g_var:		[%d]\n", g_var);
	printf("f():		[%d]\n\n", f());

	printf("Foo::g_var:	[%d]\n", Foo::g_var);
	printf("Foo::f():	[%d]\n\n", Foo::f());

	printf("Bar::g_var:	[%d]\n", Bar::g_var);
	printf("Bar::f():	[%d]\n\n", Bar::f());

	printf("Muf::g_var:	[%d]\n", Muf::g_var);
	printf("Muf::f():	[%d]\n\n", Muf::f());

	printf("::g_var:	[%d]\n", ::g_var);
	printf("::f():		[%d]\n\n", ::f());

	return (0);
}

int		main(void)
{
	char	buff[512];

	std::cout << "Hello world!" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return (0);
}
