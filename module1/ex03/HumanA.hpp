/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:29:54 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/02 15:31:35 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack() const;

	private:
	Weapon&	_weapon;
	std::string _name;
};

#endif
