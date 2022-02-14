/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 18:05:17 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string.h>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
	public:
		Dog();
		Dog(Dog const & other );
		virtual ~Dog();

		Dog & operator=(Dog const & other);

		void	train();
		void	brain_scan() const;
		void	makeSound() const;

	protected:
				Brain	*_brain;
				void	new_brain();


};

#endif
