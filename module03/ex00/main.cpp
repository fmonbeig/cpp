/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:37:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/10 14:44:04 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	ClapTrap claptrap("Bob");

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
	claptrap.attack("Robert");
	claptrap.get_information();

}
