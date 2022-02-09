/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:51:43 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/28 15:51:49 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void strUpper(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		str[i] = toupper(str[i]);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			strUpper(argv[i]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
