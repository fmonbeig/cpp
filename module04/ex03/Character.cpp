/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/15 15:52:41 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Character::Character(std::string const & name) : _name(name)
	{
		int	i;

		for(i = 0; i < 4; i++)
			_inventory[i] = NULL;
		std::cout << "**A Character is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Character::Character(void) : _name("empty")
	{
		int	i;

		for(i = 0; i < 4; i++)
			_inventory[i] = NULL;
		std::cout << "**A Character is created**" << std::endl;
	}

	Character::Character (const Character &other)
	{
		int	i;

		this->_name = other._name;
		for (i = 0; i < 4; i++)
		{
			if (other._inventory[i] != NULL)
			{
				delete _inventory[i];
				_inventory[i] = other._inventory[i]->clone();
			}
		}
	}

	Character::~Character(void)
	{
		int	i;

		for(i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
				delete _inventory[i];
		}
		std::cout << "**A Character is destroyed**" << std::endl;
	}

	Character &Character::operator=(const Character & other)
	{
		int	i;

		this->_name = other._name;
		for (i = 0; i < 4; i++)
		{
			if (other._inventory[i] != NULL)
			{
				delete _inventory[i];
				_inventory[i] = other._inventory[i]->clone();
			}
		}
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	std::string const & Character::getName() const
	{
		return (this->_name);
	}

	void Character::equip(AMateria* m)
	{
		int	i;

		for (i = 0; i < 4; i++)
		{
			if (_inventory[i] == NULL)
				_inventory[i] = m;
		}
	}

	void Character::unequip(int idx)
	{
		int i;

		if (idx < 3)
			_inventory[idx] == NULL;
	}

	void Character::use(int idx, ICharacter& target)
	{
		int i;

		if (idx < 3)
		{
			if (_inventory[i] != NULL)
				_inventory[i]->use(target);
		}
	}
