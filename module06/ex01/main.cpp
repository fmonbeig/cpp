/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:50:11 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/23 18:01:11 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data data;

	data.var1 = 42;
	data.var2 = 90;

	std::cout << "Var1 : "<< data.var1 << std::endl;
	std::cout << "Var2 : "<< data.var2 << std::endl;
	std::cout << &data << std::endl;

	uintptr_t point;

	point = serialize(&data);
	deserialize(point);

	std::cout << "Var1 : "<< data.var1 << std::endl;
	std::cout << "Var2 : "<< data.var2 << std::endl;
	std::cout << &data << std::endl;
}
