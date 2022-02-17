/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:54:36 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 13:28:34 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	ClapTrap::ClapTrap() :
	_Name(0), _Hp(0), _Ep(0), _Dmg(0)
	{
		std::cout << "ClapTrap default constructor called" << std::endl;
	}

	ClapTrap::ClapTrap (const ClapTrap &other)
	{
		this->_Name = other._Name;
		this->_Hp = other._Hp;
		this->_Ep = other._Ep;
		this->_Dmg= other._Dmg;
	}

	ClapTrap::~ClapTrap()
	{
		std::cout << "ClapTrap Destructor called" << std::endl;
	}

	ClapTrap &ClapTrap::operator=(const ClapTrap & other)
	{
		if (this == &other)
			return (*this);
		this->_Name = other._Name;
		this->_Hp = other._Hp;
		this->_Ep = other._Ep;
		this->_Dmg= other._Dmg;
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	ClapTrap::ClapTrap(std::string name) :
	_Name(name), _Hp(10), _Ep(10), _Dmg(0)
	{
		std::cout << "Claptrap name constructor called" << std::endl;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	ClapTrap::attack(const std::string & target)
	{
		if (_Hp <= 0)
			std::cout << "ClapTrap " << _Name << " is dead!" << std::endl;
		else if (_Ep > 0)
		{
			std::cout << "ClapTrap " << _Name << " attacks " << target;
			std::cout << " causing " << _Dmg << " points of damage!" << std::endl;
			_Ep--;
		}
		else
			std::cout << "ClapTrap " << _Name << " don't have enough energie to attack " << std::endl;
	}

	void	ClapTrap::takeDamage(unsigned int amount)
	{
		if (_Hp <= 0)
			std::cout << "ClapTrap " << _Name << " is already dead!" << std::endl;
		else
		{
			std::cout << "ClapTrap " << _Name << " take " << amount << " damage " << std::endl;
			_Hp -= amount;
			if (_Hp <= 0)
				std::cout << "ClapTrap " << _Name << " died :(" << std::endl;
		}
	}

	void	ClapTrap::beRepaired(unsigned int amount)
	{
		if (_Hp <= 0)
			std::cout << "ClapTrap " << _Name << " is dead!" << std::endl;
		else if (_Ep > 0)
		{
			std::cout << "ClapTrap " << _Name << " be repaired of ";
			std::cout << amount << " points" << std::endl;
			_Hp += amount;
			_Ep--;
		}
		else
			std::cout << "ClapTrap " << _Name << " don't have enough energie to be repaired" << std::endl;
	}

	void	ClapTrap::get_information()
	{
		std::cout << "\n\033[0;34m" << _Name <<" have :" << std::endl;
		std::cout << _Hp << " HP\n" << _Ep << " Energy\n" << _Dmg << " Damage\n\e[0m"  << std::endl;
	}
