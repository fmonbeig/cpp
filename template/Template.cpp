/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/01 17:16:35 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"


// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //


// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Class::Class(void) _var(0)
	{
		std::cout << "**Class is created**" << std::endl;
	}

	Class::Class (const Class &other)
	{
		this->_var = other._var;
	}

	Class::~Class(void)
	{
		std::cout << "**Class is destroyed**" << std::endl;
	}

	Class &Class::operator=(const Class & rhs)
	{
		if (this != &rhs)
		{
			this->_var = rhs._var;
		}
			return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //
