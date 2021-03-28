/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:56:50 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/28 18:36:26 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# define CLR_GRN "\033[0;32m"
# define CLR_YLW "\033[0;33m"
# define CLR_BLU "\033[0;34m"
# define CLR_RED "\033[0;31m"
# define CLR_PRP "\033[0;35m"
# define CLR_END "\033[0m"

# include <iostream>
# include <string>

template< typename T >
T const &		max( T const & x, T const & y) {
	return (x >= y ? x : y);
}

template< typename T >
T const &		min( T const & x, T const & y) {
	return (x <= y ? x : y);
}

template< typename T >
void			swap( T & x, T & y) {
	T	tmp;
	tmp = x;
	x = y;
	y = tmp;
}

class Awesome
{
private:
	int _n;
public:
	Awesome() { }
	Awesome(int n) : _n(n) { }
	int getN() const { return this->_n; }
	bool operator==(Awesome const & rhs) const { return this->_n == rhs._n; }
	bool operator!=(Awesome const & rhs) const { return this->_n != rhs._n; }
	bool operator>(Awesome const & rhs) const { return this->_n > rhs._n; }
	bool operator<(Awesome const & rhs) const { return this->_n < rhs._n; }
	bool operator>=(Awesome const & rhs) const { return this->_n >= rhs._n; }
	bool operator<=(Awesome const & rhs) const { return this->_n <= rhs._n; }
};

std::ostream &		operator<<(std::ostream & out, Awesome const & src)
{	return out << src.getN(); }

#endif