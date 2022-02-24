/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:50:11 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/23 18:07:57 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data		data;
	Data		*temp;
	uintptr_t	point;

	data.var1 = 42;
	data.var2 = 90;

	std::cout << "\e[1;37mValue of data struct\e[0m" <<std::endl;
	std::cout << "Var1 : "<< data.var1 << std::endl;
	std::cout << "Var2 : "<< data.var2 << std::endl;
	std::cout << &data << std::endl << std::endl;


	point = serialize(&data);
	temp = deserialize(point);
	std::cout << "\e[1;37mValue after deserialize (with new data pointer)\e[0m" <<std::endl;

	std::cout << "Var1 : "<< temp->var1 << std::endl;
	std::cout << "Var2 : "<< temp->var2 << std::endl;
	std::cout << temp << std::endl;
}
