/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 18:00:34 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string.h>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & other );
		virtual ~Dog();

		Dog & operator=(Dog const & other);
		void	makeSound() const;

	protected:
};

#endif
