/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/10 17:03:35 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	ScavTrap::ScavTrap(void) : ClapTrap()
	{
		std::cout << "\e[0;32mScavTrap\e[0m default constructor called" << std::endl;
	}

	ScavTrap::ScavTrap (const ScavTrap &other)
	{
		this->_Name = other._Name;
		this->_Hp = other._Hp;
		this->_Ep = other._Ep;
		this->_Dmg= other._Dmg;
	}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << "\e[0;32mScavTrap\e[0m Destructor called" << std::endl;
	}

	ScavTrap &ScavTrap::operator=(const ScavTrap & other)
	{
		this->_Name = other._Name;
		this->_Hp = other._Hp;
		this->_Ep = other._Ep;
		this->_Dmg= other._Dmg;
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	ScavTrap::ScavTrap(std::string name): ClapTrap(name)
	{
		std::cout << "\e[0;32mScavTrap\e[0m default constructor called" << std::endl;
		_Hp = HIT_POINT;
		_Ep = ENERGY_POINT;
		_Dmg = DAMAGE;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	ScavTrap::attack(const std::string & target)
	{
		if (_Hp <= 0)
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m " << _Name << " is dead!" << std::endl;
		else if (_Ep > 0)
		{
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m " << _Name << " attacks " << target;
			std::cout << " causing " << _Dmg << " points of damage!" << std::endl;
			_Ep--;
		}
		else
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m " << _Name << " don't have enough energie to attack " << std::endl;
	}

	void	ScavTrap::guardGate()
	{
		if (_Hp <= 0)
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m " << _Name << " is dead!" << std::endl;
		else
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m " << _Name << " enter in Gate keeper mod" << std::endl;
	}
