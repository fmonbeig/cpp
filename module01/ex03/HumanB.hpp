/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:29:54 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/02 15:55:53 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack() const;
	void	setWeapon(Weapon & weapon);

	private:
	Weapon *_weapon;
	std::string _name;

};

#endif
