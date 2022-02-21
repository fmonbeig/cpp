/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:25 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 18:15:30 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	int				i;
	const Animal	*pack[6];

	i = -1;
	while(++i < 6)
	{
		if (i % 2)
			pack[i] = new Dog;
		else
			pack[i] = new Cat;
		std::cout << std::endl;
	}
		std::cout << std::endl;
	i = -1;
	while(++i < 6)
	{
		if (i % 2)
			delete pack[i];
		else
			delete pack[i];
		std::cout << std::endl;
	}

	std::cout << "=============OTHER TEST============" <<std::endl;

	Dog dog1;
	Dog dog2;

	dog1.train();
	dog1.brain_scan();

	dog2 = dog1;

	dog2.brain_scan();


	return 0;
}
