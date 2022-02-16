/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 14:16:16 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string.h>
#include "AMateria.hpp"
#include "Character.hpp"

class Cure: public AMateria
{
	public:

		Cure();
		Cure(Cure const & other );
		virtual ~Cure();

		Cure & operator=(Cure const & other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
