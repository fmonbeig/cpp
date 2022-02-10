/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:37:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/10 18:39:48 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

// FragTrap
// 		_Hp = 100;
// 		_Ep = 100;
// 		_Dmg = 30;

// ScavTrap
// 		_Hp = 100;
// 		_Ep = 50;
// 		_Dmg = 20;

int main()
{

	DiamondTrap steph("Stéphanie");

	steph.get_information();
	// FragTrap bob("Bob");
	// ScavTrap robert("Robert");
	// ClapTrap gerard("Gérard");

	// bob.get_information();
	// robert.get_information();
	// gerard.get_information();

	// bob.attack("Robert");
	// robert.takeDamage(bob.get_dmg());
	// robert.beRepaired(7);
	// robert.get_information();

	// gerard.attack("Bob");
	// bob.takeDamage(gerard.get_dmg());
	// bob.get_information();

	// bob.attack("Gérard");
	// gerard.takeDamage(bob.get_dmg());

	// bob.highFivesGuys();
}
