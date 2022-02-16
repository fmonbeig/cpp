/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 17:15:05 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string.h>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character: public ICharacter
{
	protected:
		std::string	_name;
		AMateria *_inventory[4];

		Character();
	public:
		Character(std::string const & name);
		Character(Character const & other);
		virtual ~Character();
		Character & operator=(Character const & other);

		std::string const & getName() const;
		AMateria	*getMateriaAdress(int idx) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif
