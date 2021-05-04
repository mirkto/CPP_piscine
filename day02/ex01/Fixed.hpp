#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_rawBits;
	static int const	_shift;

public:
	Fixed();
	Fixed(int const num);
	Fixed(float const num);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif