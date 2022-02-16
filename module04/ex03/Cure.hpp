/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 14:28:11 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string.h>
#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria
{
	public:

		Ice();
		Ice(Ice const & other );
		virtual ~Ice();

		Ice & operator=(Ice const & other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
