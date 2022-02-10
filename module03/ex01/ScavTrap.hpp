/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:48:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/10 17:05:37 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

# define HIT_POINT 100
# define ENERGY_POINT 50
# define DAMAGE 20

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & other );
	virtual ~ScavTrap();

	ScavTrap & operator=(ScavTrap const & other);

	void	attack(const std::string & target);
	void	guardGate();

	private:

};

#endif
