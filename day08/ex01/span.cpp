# include "span.hpp"

Span::Span(unsigned int len)
{
	if (static_cast<int>(len) < 0)
		throw std::logic_error(CLR_RED " -- Error: array length cannot be less than zero" CLR_END);
	this->_len = len;
	this->_arr.reserve(len);
}

Span::Span(Span const & src)
	{ *this = src; }

Span&	Span::operator = (Span const & src)
{
	if (this != &src)
	{
		this->_len = src._len;
		this->_arr = src._arr;
	}
	return *this;
}

void	Span::addNumber(int number)
{
	if (this->_arr.size() == this->_len)
		throw std::logic_error(CLR_RED " -- Error: object is full" CLR_END);
	this->_arr.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin > end)
		throw std::logic_error(CLR_RED " -- Error: wrong input: begin > end" CLR_END);
	for (; begin != end; begin++)
	{
		if (this->_arr.size() >= this->_len)
			throw std::logic_error(CLR_RED " -- Error: object is full" CLR_END);
		this->_arr.push_back(*begin);
	}
}

void	Span::addRange(int a, int b)
{
	if (a > b)
	{
		int	tmp = a;
		a = b;
		b = tmp;
	}
	for ( ; a <= b; a++)
	{
		if (this->_arr.size() == this->_len)
			throw std::logic_error(CLR_RED " -- Error: object is full" CLR_END);
		this->_arr.push_back(a);
	}
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_arr.size() < 2)
		throw std::logic_error(CLR_RED " -- Error: no span to calculate" CLR_END);
	std::vector<int>	tmp = this->_arr;
	std::sort(tmp.begin(), tmp.end());
	unsigned int	result = -1;
	unsigned int	tmpRes = 0;
	for (int i = 0; (i + tmp.begin()) != (tmp.end() - 1); i++)
	{
		tmpRes = *(i + tmp.begin() + 1) - *(i + tmp.begin());
		if (result > tmpRes)
			result = tmpRes;
		// std::cout << " - " << *(i + tmp.begin() + 1) << std::endl;
	}
	return result;
}

unsigned int	Span::longestSpan(void)
{
	if (this->_arr.size() < 2)
		throw std::logic_error(CLR_RED " -- Error: no span to calculate" CLR_END);
	std::vector<int>	tmp = this->_arr;
	std::sort(tmp.begin(), tmp.end());
	return *tmp.rbegin() - *tmp.begin();
}