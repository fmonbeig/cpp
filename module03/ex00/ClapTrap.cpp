/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:54:36 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/09 18:27:42 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	ClapTrap::ClapTrap() :
	_Name(0), _Hp(0), _Mana(0), _Dmg(0){}

	ClapTrap::ClapTrap (const ClapTrap &other)
	{
		this->_Name = other._Name;
		this->_Hp = other._Hp;
		this->_Mana = other._Mana;
		this->_Dmg= other._Dmg;
	}

	ClapTrap::~ClapTrap() {}

	ClapTrap &ClapTrap::operator=(const ClapTrap & other)
	{
		this->_Name = other._Name;
		this->_Hp = other._Hp;
		this->_Mana = other._Mana;
		this->_Dmg= other._Dmg;
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	ClapTrap::ClapTrap(std::string name) :
	_Name(name), _Hp(10), _Mana(10), _Dmg(0){}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	ClapTrap::attack(const std::string & target)
	{
		std::cout << "ClapTrap " << _Name << " attacks " << target;
		std::cout << "causing " << _Dmg << " points of damage!" << std::endl;
	}

	void	ClapTrap::takeDamage(unsigned int amount)
	{
		
	}

	void	ClapTrap::beRepaired(unsigned int amount)
	{

	}
