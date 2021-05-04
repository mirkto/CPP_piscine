#ifndef SPAN_HPP
# define SPAN_HPP

# define CLR_GRN "\033[0;32m"
# define CLR_YLW "\033[0;33m"
# define CLR_BLU "\033[0;34m"
# define CLR_RED "\033[0;31m"
# define CLR_PRP "\033[0;35m"
# define CLR_END "\033[0m"

# include <iostream>
# include <vector>
# include <exception>
// # include <algorithm>
// # include <string>

class	Span
{
private:
	unsigned int 		_len;
	std::vector<int>	_arr;
	Span() { }
public:
	Span(unsigned int len);
	Span(Span const & src);
	virtual ~Span(void) { }
	Span &	operator = (Span const & src);

	void			addNumber(int number);
	void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

	void			addRange(int a, int b);

};

#endif