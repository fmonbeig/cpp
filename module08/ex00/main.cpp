/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:53:34 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/01 13:10:19 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	try
	{
		std::vector<int> v = {7, 5, 0, 9, 18};
		int j = easyfind(v, 4849898);
		std::cout << j << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::list<int> v = {7, 5, 0, 9, 18};
		int j = easyfind(v, 7);
		std::cout << j << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}
