/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngonzo <ngonzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:39 by ngonzo            #+#    #+#             */
/*   Updated: 2021/03/23 20:51:30 by ngonzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class C : public Base
{

	public:

		C();
		C( C const & src );
		virtual ~C();

		C &		operator=( C const & rhs );

	private:

};

#endif /* *************************************************************** C_H */