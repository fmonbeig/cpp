/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:15:00 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 14:04:45 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap(), _Name("default")
	{
		std::cout << "\e[0;97mDiamondTrap\e[0m default constructor called" << std::endl;
	}

	DiamondTrap::DiamondTrap (const DiamondTrap &other) :
		ClapTrap(other), ScavTrap(other), FragTrap(other),
		_Name(other._Name){}

	DiamondTrap::~DiamondTrap(void)
	{
		std::cout << "\e[0;97mDiamondTrap\e[0m Destructor called" << std::endl;
	}

	DiamondTrap &DiamondTrap::operator=(const DiamondTrap & other)
	{
		ClapTrap::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	DiamondTrap::DiamondTrap(std::string name):
		ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name),
		_Name(name)
	{
		ClapTrap::_Name = name + "_clap_name";
		std::cout << "\e[0;97mDiamondTrap\e[0m name constructor called" << std::endl;
		this->_Hp = FragTrap::_HpBuffer;
		this->_Ep = ScavTrap::_EnergyBuffer;
		this->_Dmg = FragTrap::_DamageBuffer;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	DiamondTrap::get_information()
	{
		std::cout << "\n\e[0;97m" << _Name <<" have :" << std::endl;
		std::cout << _Hp << " HP\n" << _Ep << " Energy\n" << _Dmg << " Damage\e[0m"  << std::endl;
	}

	void	DiamondTrap::whoAmI()
	{
		std::cout << "Hi, I'm " << ClapTrap::_Name << " but you can call me " << "\e[0;97m" << _Name << "\e[0m"<< std::endl;
	}
