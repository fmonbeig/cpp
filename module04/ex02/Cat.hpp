/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 18:05:09 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string.h>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat: public A_Animal
{
	public:
		Cat();
		Cat(Cat const & other );
		virtual ~Cat();

		Cat & operator=(Cat const & other);

		void	makeSound() const;

	protected:

	private:
		Brain	*_brain;
		void	new_brain();
};

#endif
