/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:28:13 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/02 15:33:51 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const & Weapon::getType() const
{
	std::string const & type = this->_type;
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
