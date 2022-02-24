/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:32:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/24 16:55:33 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string.h>

template<typename T>
void iter(T *x, int i, void (*f)(T*))
{
	int j = -1;

	while ( ++j < i)
		f(&x[j]);
}

template< typename T>
void	add42(T  *i)
{
	*i += 42;
}

template< typename T>
void	printTab(T  *tab)
{
	std::cout << *tab << std::endl;
}


#endif

