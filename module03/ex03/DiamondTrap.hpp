/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:10:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 15:05:24 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string.h>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & other );
	virtual ~DiamondTrap();

	DiamondTrap & operator=(DiamondTrap const & other);

	void	whoAmI();

	void	get_information();

	private:
	std::string _Name;
};

#endif
