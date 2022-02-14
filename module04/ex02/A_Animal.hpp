/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 18:03:32 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <iostream>
#include <string.h>

class A_Animal
{
	public:
		A_Animal();
		A_Animal(std::string type);
		A_Animal(A_Animal const & other );
		virtual ~A_Animal();

		A_Animal & operator=(A_Animal const & other);

		virtual void		makeSound() const = 0;
		std::string	getType() const;

	protected:
		std::string	_type;
};

#endif
