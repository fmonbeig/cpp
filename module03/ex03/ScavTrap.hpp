/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:48:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 13:50:27 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & other );
	virtual ~ScavTrap();

	ScavTrap & operator=(ScavTrap const & other);

	virtual void	attack(const std::string & target);
	void	guardGate();

	void	get_information();

	protected:
	int _EnergyBuffer;
};

#endif
