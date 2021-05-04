#include "whatever.hpp"

int		main( void )
{
		std::cout << CLR_YLW"\n---subject main---"CLR_END << std::endl;
	
	int		a = 2;
	int		b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;

		std::cout << CLR_YLW"\n--- additional main #1 ---"CLR_END << std::endl;
	Awesome e(10);
	Awesome f(20);
	std::cout << "e = " << e.getN() << ", f = " << f.getN() << std::endl;
	std::cout << "swap( e, f )" << std::endl;
	::swap( e, f );
	std::cout << "e = " << e.getN() << ", f = " << f.getN() << std::endl;
	std::cout << "min(e, f) = " << ::min( e.getN(), f.getN() ) << std::endl;
	std::cout << "max(e, f) = " << ::max( e.getN(), f.getN() ) << std::endl;

		std::cout << CLR_YLW"\n--- additional main #2 ---"CLR_END << std::endl;
	Awesome g(10);
	Awesome j(20);
	std::cout << "g = " << g << ", j = " << j << std::endl;
	std::cout << "swap( g, j )" << std::endl;
	::swap( g, j );
	std::cout << "g = " << g << ", j = " << j << std::endl;
	std::cout << "min(g, j) = " << ::min( g, j ) << std::endl;
	std::cout << "max(g, j) = " << ::max( g, j ) << std::endl;

	return 0;
}