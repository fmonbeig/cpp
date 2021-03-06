/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:15:00 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 12:16:34 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	FragTrap::FragTrap(void) : ClapTrap()
	{
		std::cout << "\e[0;33mFragTrap\e[0m default constructor called" << std::endl;
	}

	FragTrap::FragTrap (const FragTrap &other) : ClapTrap(other)
	{}

	FragTrap::~FragTrap(void)
	{
		std::cout << "\e[0;33mFragTrap\e[0m Destructor called" << std::endl;
	}

	FragTrap &FragTrap::operator=(const FragTrap & other)
	{
		ClapTrap::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	FragTrap::FragTrap(std::string name): ClapTrap(name)
	{
		std::cout << "\e[0;33mFragTrap\e[0m name constructor called" << std::endl;
		_Hp = 100;
		_Ep = 100;
		_Dmg = 30;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	FragTrap::highFivesGuys()
	{
		if (_Hp <= 0)
			std::cout << "ClapTrap \e[0;33mFragTrap\e[0m " << _Name << " is dead!" << std::endl;
		else
			std::cout << "ClapTrap \e[0;33mFragTrap\e[0m " << _Name << " say :\n" "Give me five Brooo!\n" << "\n\e[0;35m( ???o???)???(???-??? )v\e[0m\n" << std::endl;
	}

		void	FragTrap::get_information()
	{
		std::cout << "\n\e[0;33m" << _Name <<" have :" << std::endl;
		std::cout << _Hp << " HP\n" << _Ep << " Energy\n" << _Dmg << " Damage\e[0m"  << std::endl;
	}
