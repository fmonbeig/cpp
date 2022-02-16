/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 18:00:12 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & other );
		virtual ~Animal();

		Animal & operator=(Animal const & other);

		virtual void	makeSound() const;
		std::string	getType() const;

	protected:
		std::string	_type;
};

#endif
