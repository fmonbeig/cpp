/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:38:50 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 13:55:43 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string nom);
	ClapTrap(ClapTrap const & other );
	virtual ~ClapTrap();

	ClapTrap & operator=(ClapTrap const & other);

	virtual void	attack(const std::string & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	virtual void	get_information();
	virtual int		get_dmg();

	protected:
	std::string	_Name;
	int			_Hp;
	int			_Ep;
	int			_Dmg;
};

#endif
