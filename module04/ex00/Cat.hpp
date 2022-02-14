/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 11:52:34 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & other );
		virtual ~Cat();

		Cat & operator=(Cat const & other);

	protected:
};

#endif
