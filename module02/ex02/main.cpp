/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:21:26 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/09 15:46:51 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



int main( void ) {

	Fixed x;
	Fixed const y( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "SUBJECT TEST\n===========================" << std::endl;
	std::cout << x << std::endl;
	std::cout << ++x << std::endl;
	std::cout << x << std::endl;
	std::cout << x++ << std::endl;
	std::cout << x << std::endl;
	std::cout << y << std::endl;

	std::cout << "Le plus grand -> " << Fixed::max( x, y ) << std::endl;
	std::cout << "Le plus petit -> " << Fixed::min( x, y ) << std::endl << std::endl;


	std::cout << "MY TEST\n===========================" << std::endl;
	Fixed a;
	Fixed b;
	Fixed c;

	a = Fixed( 1234.4321f );
	b = Fixed( 50 );

	std::cout << "a = " << a << "\nb = " << b << std::endl;
	if (a < b)
		std::cout << a << " est " << "plus petit que " << b << std::endl;
	if (a > b)
		std::cout << a << " est " << "plus grand que " << b << std::endl;
	if (a >= b)
		std::cout << a << " est " << "plus grand ou égal a " << b << std::endl;
	if (a <= b)
		std::cout << a << " est " << "plus petit ou égal a " << b << std::endl;
	if (a == b)
		std::cout << a << " est " << "strictement égal a " << b << std::endl;
	if (a != b)
		std::cout << a << " est " << "different de " << b << std::endl << std::endl;


	a = Fixed( 99 );
	b = Fixed( 300.01f );

	std::cout << "a = " << a << "\nb = " << b << std::endl;
	if (a < b)
		std::cout << a << " est " << "plus petit que " << b << std::endl;
	if (a > b)
		std::cout << a << " est " << "plus grand que " << b << std::endl;
	if (a >= b)
		std::cout << a << " est " << "plus grand ou égal a " << b << std::endl;
	if (a <= b)
		std::cout << a << " est " << "plus petit ou égal a " << b << std::endl;
	if (a == b)
		std::cout << a << " est " << "strictement égal a " << b << std::endl;
	if (a != b)
		std::cout << a << " est " << "different de " << b << std::endl;

		std::cout << std::endl;
	a = Fixed( 100 );
	b = Fixed( 100 );

	std::cout << "a = " << a << "\nb = " << b << std::endl;
	if (a < b)
		std::cout << a << " est " << "plus petit que " << b << std::endl;
	if (a > b)
		std::cout << a << " est " << "plus grand que " << b << std::endl;
	if (a >= b)
		std::cout << a << " est " << "plus grand ou égal a " << b << std::endl;
	if (a <= b)
		std::cout << a << " est " << "plus petit ou égal a " << b << std::endl;
	if (a == b)
		std::cout << a << " est " << "strictement égal a " << b << std::endl;
	if (a != b)
		std::cout << a << " est " << "different de " << b << std::endl;

	std::cout << std::endl;

	a = Fixed( 50.5f );
	b = Fixed( 100 );
	c = a + b;

	std::cout << "a = " << a << "\nb = " << b << std::endl;
	std::cout << "resultat de " << a << " + " << b << " = " << c <<  std::endl;
	c = a - b;
	std::cout << "resultat de " << a << " - " << b << " = " << c <<  std::endl;
	c = a * b;
	std::cout << "resultat de " << a << " * " << b << " = " << c <<  std::endl;
	c = a / b;
	std::cout << "resultat de " << a << " / " << b << " = " << c <<  std::endl;

	std::cout << std::endl;
	a = Fixed( 80.97f );
	std::cout << "a = " << a << std::endl;

	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a++ << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
}
