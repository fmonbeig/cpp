/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:37:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 11:48:27 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	ScavTrap bob("Bob");
	ScavTrap michel("Michel");

	michel = bob;

	bob.get_information();
	michel.get_information();

	bob.attack("Robert");
	bob.takeDamage(5);
	bob.get_information();
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.get_information();
	bob.takeDamage(5);
	bob.attack("Robert");
	bob.get_information();
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.get_information();
	bob.attack("Robert");
	bob.takeDamage(25);
	bob.takeDamage(3);
	bob.beRepaired(1);
	bob.guardGate();
	bob.attack("Robert");
	bob.get_information();

}
