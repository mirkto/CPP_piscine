/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:29 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/23 20:51:32 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B : public Base
{

	public:

		B();
		B( B const & src );
		virtual ~B();

		B &		operator=( B const & rhs );

	private:

};

#endif /* *************************************************************** B_H */