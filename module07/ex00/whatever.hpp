/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:32:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/08 14:44:21 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string.h>

template< typename T >
T max( T const & x, T const & y )
{ return ((x > y) ? x : y); }

template< typename T >
T min ( T const & x, T const & y )
{ return ((x < y) ? x : y);}

template< typename T >
void swap (T & x, T & y)
{
	T temp = x;
	x = y;
	y = temp;
}

#endif
