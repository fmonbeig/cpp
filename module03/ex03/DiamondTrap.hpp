/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:10:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/10 18:51:47 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string.h>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & other );
	virtual ~DiamondTrap();

	DiamondTrap & operator=(DiamondTrap const & other);

	void	attack(const std::string & target);

	void	get_information();

	private:
	std::string _Name;
};

#endif


// Mes questions

// Comment faire pour heriter correctement de mes parents, ma syntaxe est pourtant bonne ;(
// On utilise bien le mot cle virtual dans les classe parent
// Double name kezaco ?
// Comment utiliser la fonction attack seulement

//-Wshadow
// Warn whenever a local variable or type declaration shadows another variable, parameter,
// type, class member (in C++), or instance variable (in Objective-C) or whenever a built-in function is shadowed.
// Note that in C++, the compiler warns if a local variable shadows an explicit typedef, but not if it shadows a struct/class/enum.
// If this warning is enabled, it includes also all instances of local shadowing.
// This means that -Wno-shadow=local and -Wno-shadow=compatible-local are ignored when -Wshadow is used.Same as -Wshadow=global.

// -Wno-shadow-ivar (Objective-C only)
// Do not warn whenever a local variable shadows an instance variable in an Objective-C method.
