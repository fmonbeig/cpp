/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:27:26 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/15 16:17:37 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main()
{
	int			i;
	AMateria	*floor[100];
	Character	Cloud("Cloud");
	Character	Sephiroth("Sephiroth");
	Ice			*ice1 = new Ice;
	Ice			*ice2 = new Ice;
	Cure		*cure1 = new Cure;
	Cure		*cure2 = new Cure;

	Cloud.equip(ice1);
	Cloud.equip(cure1);
	Cloud.equip(ice2);
	Cloud.equip(cure2);

	Cloud.use(0, Sephiroth);


	for (i = 0; i < 100; i++)
	{
		if (floor[i] != NULL)
			delete floor[i];
	}
}
