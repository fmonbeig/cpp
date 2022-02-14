/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:25 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 15:05:57 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{

	std::cout << "-----------SUBJECT TEST-----------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "-----------SUBJECT TEST *WRONG*-----------" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the cat sound!
	std::cout << meta2->getType() << " " << std::endl;
	meta2->makeSound();

	delete meta2;
	delete i2;

	std::cout << "\n-----------MY TEST-----------" << std::endl;


	{
		Animal	animal;
		animal.makeSound();
	}
	std::cout << std::endl;
	{
		Dog		dog;
		dog.makeSound();
	}
	std::cout << std::endl;
	{
		Cat		cat;
		cat.makeSound();
	}
		std::cout << std::endl;
	{
		WrongCat		wrongcat;
		wrongcat.makeSound();
	}
		std::cout << std::endl;
	{
		WrongAnimal		wronganimal;
		wronganimal.makeSound();
	}

}
