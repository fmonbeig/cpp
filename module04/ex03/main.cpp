/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:27:26 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 18:16:31 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"



int	main()
{
	int			i;
	AMateria	*floor[100];
	Character	Cloud("Cloud");
	Character	FakeCloud("FakeCloud");
	Character	Sephiroth("Sephiroth");
	MateriaSource materiasource;

	for (i = 0; i < 100; i++)
		floor[i] = NULL;

	materiasource.learnMateria(new Ice());
	materiasource.learnMateria(new Cure());
	materiasource.learnMateria(new Cure());
	materiasource.learnMateria(new Cure());
	materiasource.learnMateria(new Cure());

	Sephiroth.equip(materiasource.createMateria("ice"));
	Cloud.equip(materiasource.createMateria("cure"));
	Cloud.equip(materiasource.createMateria("cure"));
	Cloud.equip(materiasource.createMateria("cure"));
	Cloud.equip(materiasource.createMateria("cure"));
	Cloud.equip(materiasource.createMateria("cure")); // if too much Materia is created, the materia is delete
	Cloud.equip(materiasource.createMateria("cure"));
	Cloud.equip(materiasource.createMateria("FAKE"));


	std::cout << std::endl;
	std::cout << Sephiroth.getName() << ": ";
	Sephiroth.use(0, Cloud);
	std::cout << Cloud.getName() << ": ";
	Cloud.use(0, Cloud);
	std::cout << std::endl;

	FakeCloud = Cloud;

	std::cout << std::endl;
	std::cout << FakeCloud.getName() << ": ";
	FakeCloud.use(3, FakeCloud);
	std::cout << std::endl;

	for (i = 0; i < 100; i++)
	{
		if (floor[i] == NULL)
		{
			floor[i] = Cloud.getMateriaAdress(2);
			break ;
		}
	}
	Cloud.unequip(2);
	Cloud.use(2, Cloud);


	for (i = 0; i < 100; i++)
	{
		if (floor[i] != NULL)
			delete floor[i];
	}
	std::cout << std::endl;
	std::cout << " \e[0;101m----------SUBJECT TEST------------\e[0m" << std::endl;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

}
