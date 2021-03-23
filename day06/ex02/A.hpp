/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:25 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/23 20:51:35 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A : public Base
{

	public:

		A();
		A( A const & src );
		virtual ~A();

		A &		operator=( A const & rhs );

	private:

};

#endif /* *************************************************************** A_H */