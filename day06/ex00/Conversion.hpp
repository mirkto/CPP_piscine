#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>

class Conversion
{
private:
	std::string		_inputStr;
	double			_toDouble;
	float			_toFloat;
	int				_toInt;
	char			_toChar;
	Conversion() {}

public:
	Conversion(int argc, char **argv);
	Conversion(Conversion const & src);
	virtual ~Conversion() {}
	Conversion &	operator=(Conversion const & src);
};

#endif