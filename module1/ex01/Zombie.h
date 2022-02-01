/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/01 18:54:02 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Zombie.hpp"

Zombie*	newZombie( std::string _name);
void	randomChump(std::string _name);
Zombie* zombieHorde(int N, std::string name);

#endif
