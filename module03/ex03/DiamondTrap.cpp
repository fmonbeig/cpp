/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:15:00 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/10 18:50:11 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
	{
		std::cout << "\e[0;33mDiamondTrap\e[0m default constructor called" << std::endl;
	}

	DiamondTrap::DiamondTrap (const DiamondTrap &other)
	{
		this->_Name = other._Name;
		this->_Hp = other._Hp;
		this->_Ep = other._Ep;
		this->_Dmg= other._Dmg;
	}

	DiamondTrap::~DiamondTrap(void)
	{
		std::cout << "\e[0;33mDiamondTrap\e[0m Destructor called" << std::endl;
	}

	DiamondTrap &DiamondTrap::operator=(const DiamondTrap & other)
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

	DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
	{
		std::cout << "\e[0;33mDiamondTrap\e[0m default constructor called" << std::endl;
		ClapTrap::_Name = name + "_clap_name";
		this->_Hp = this->FragTrap::_Hp;
		this->_Ep = this->ScavTrap::_Ep;
		this->_Dmg = this->FragTrap::_Dmg; //FIXEME --> ca ne fait pas ce que je veux
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	DiamondTrap::attack(const std::string & target)
	{
		if (_Hp <= 0)
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m \e[0;33mFragTrap\e[0m " << _Name << " is dead!" << std::endl;
		else if (_Ep > 0)
		{
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m \e[0;33mFragTrap\e[0m " << _Name << " attacks " << target;
			std::cout << " causing " << _Dmg << " points of damage!" << std::endl;
			_Ep--;
		}
		else
			std::cout << "ClapTrap \e[0;32mScavtrap\e[0m \e[0;33mFragTrap\e[0m " << _Name << " don't have enough energie to attack " << std::endl;
	}

		void	DiamondTrap::get_information()
	{
		std::cout << "\n\e[0;33m" << _Name <<" have :" << std::endl;
		std::cout << _Hp << " HP\n" << _Ep << " Energy\n" << _Dmg << " Damage\e[0m"  << std::endl;
	}

