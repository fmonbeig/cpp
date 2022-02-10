/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:37:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/10 17:02:05 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	ScavTrap claptrap("Bob");

	claptrap.get_information();

	claptrap.attack("Robert");
	claptrap.takeDamage(5);
	claptrap.get_information();
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.get_information();
	claptrap.takeDamage(5);
	claptrap.attack("Robert");
	claptrap.get_information();
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.beRepaired(1);
	claptrap.get_information();
	claptrap.attack("Robert");
	claptrap.takeDamage(25);
	claptrap.takeDamage(3);
	claptrap.beRepaired(1);
	claptrap.guardGate();
	claptrap.attack("Robert");
	claptrap.get_information();

}
