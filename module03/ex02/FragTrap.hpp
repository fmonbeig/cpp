/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:10:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/11 12:16:13 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string.h>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & other );
	virtual ~FragTrap();

	FragTrap & operator=(FragTrap const & other);

	void	highFivesGuys(void);

	void	get_information();

	private:

};

#endif
