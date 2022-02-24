/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:32:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/24 17:54:46 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string.h>

template<typename T>
class Array
{
	protected :
		T *array;

	public :
		Array<T>(): T(NULL) {}
		Array<T>(unsigned int n)
		{ this->array = new T[n]; }
		Array<T>(Array const & other ) {}
		virtual ~Array<T>(void)
		{
			if (T)
				delete T;
		}

		Array & operator=(Array const & other)
		{
			if (this->array)
				delete this->array;
			// this->array =
		}
		{return *this;}
};

#endif

