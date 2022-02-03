/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:33:10 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/02 15:55:59 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attack with their " << _weapon->getType() <<std::endl;
	else
		std::cout << this->_name << " attack with his bare hands " <<std::endl;
}
