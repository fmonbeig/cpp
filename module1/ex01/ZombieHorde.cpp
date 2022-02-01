/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:22:44 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/01 18:50:08 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name )
{
	int		i;
	Zombie	*zombie;

	zombie = new Zombie[N];
	i = -1;
	while (++i < N)
		zombie[i].set_name(name);
	return (zombie);
}

void	randomChump( std::string name )
{
	Zombie zombie;

	zombie.set_name(name);
	zombie.announce();
}

Zombie*	newZombie( std::string name)
{
	Zombie *zombie;

	zombie = new Zombie;
	zombie->set_name(name);

	return (zombie);
}


