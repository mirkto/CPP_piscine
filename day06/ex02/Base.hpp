/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:34 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/23 20:53:50 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{
public:
	virtual ~Base();

private:
	Base();
	Base( Base const & src );

	Base &		operator=( Base const & rhs );
};

#endif /* ************************************************************ BASE_H */