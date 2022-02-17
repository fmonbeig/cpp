/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:37:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/15 11:03:53 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	FragTrap	bob("Bob");
	ScavTrap	robert("Robert");
	ClapTrap	gerard("Gérard");
	DiamondTrap	steph("Stéphanie");

	bob.get_information();
	robert.get_information();
	gerard.get_information();
	std::cout << std::endl;
	steph.whoAmI();
	steph.get_information();
	std::cout << std::endl;

	steph.guardGate();
	steph.highFivesGuys();
	steph.attack("Bob");
	std::cout << std::endl;

	bob.takeDamage(steph.get_dmg());
	bob.beRepaired(12);
	bob.beRepaired(12);
	bob.get_information();
	std::cout << std::endl;

	steph.attack("Robert");
	robert.takeDamage(steph.get_dmg());
	robert.guardGate();
	steph.attack("Robert");
	robert.takeDamage(0);

	std::cout << std::endl;
	steph.attack("Gérard");
	gerard.takeDamage(steph.get_dmg());

	std::cout << std::endl;
	bob.attack("Stéphanie");
	steph.takeDamage(bob.get_dmg());
	robert.attack("Stéphanie");
	steph.takeDamage(robert.get_dmg());
	bob.attack("Stéphanie");
	steph.takeDamage(bob.get_dmg());

	std::cout << std::endl;
	bob.attack("Stéphanie");
	steph.takeDamage(bob.get_dmg());
	std::cout << std::endl;
	bob.highFivesGuys();
}
