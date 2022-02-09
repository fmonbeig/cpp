/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:54:15 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/02 11:05:40 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	Zombie	*horde;
	int		i;
	int		N;

	N = 7;
	i = -1;
	horde = zombieHorde(N, "Robert");

	while(++i < N)
		horde[i].announce();
	
	delete [] horde;
}
