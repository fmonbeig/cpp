/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:31:33 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/08 15:07:53 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int tab[] = {1, 2, 3, 4 ,5};
	int i = 5;

	std::cout << "\e[0;33mTab Before adding 42 (INT)\e[0m" << std::endl;
	iter(tab, i, printTab);
	iter(tab, i, add42);
	std::cout << "\e[0;32mTab After adding 42(INT)\e[0m" << std::endl;
	iter(tab, i, printTab);

	double tab2[] = {1.56, 2.34, 3.1222, 4.9898 ,5.27};
	double ii = 5;

	std::cout << "\e[0;33mTab Before adding 42(DOUBLE)\e[0m" << std::endl;
	iter(tab2, ii, printTab);
	iter(tab2, ii, add42);
	std::cout << "\e[0;32mTab After adding 42(DOUBLE)\e[0m" << std::endl;
	iter(tab2, ii, printTab);
	return (0);
}

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T & x ) { std::cout << x << std::endl; return; }

// int main() {
// int tab[] = { 0, 1, 2, 3, 4 };
// Awesome tab2[5];

// iter( tab, 5, print );
// iter( tab2, 5, print );

// return 0;
// }
