/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 14:10:55 by fmonbeig         ###   ########.fr       */
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

	ScavTrap::ScavTrap (const ScavTrap &other) : ClapTrap(other)
	{}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << "\e[0;32mScavTrap\e[0m Destructor called" << std::endl;
	}

	ScavTrap &ScavTrap::operator=(const ScavTrap & other)
	{
		ClapTrap::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	ScavTrap::ScavTrap(std::string name): ClapTrap(name)
	{
		std::cout << "\e[0;32mScavTrap\e[0m name constructor called" << std::endl;
		_Hp = 100;
		_Ep = 50;
		_EnergyBuffer = _Ep;
		_Dmg = 20;
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

	void	ScavTrap::get_information()
	{
		std::cout << "\n\e[0;32m" << _Name <<" have :" << std::endl;
		std::cout << _Hp << " HP\n" << _Ep << " Energy\n" << _Dmg << " Damage\e[0m"  << std::endl;
	}
