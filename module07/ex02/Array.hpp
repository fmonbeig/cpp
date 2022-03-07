/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:32:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/07 11:32:08 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>

template<typename T>
class Array
{
	protected :
		T				*array;
		unsigned int	_size;

	public :

		Array<T>(): array(NULL), _size(0) {}

		Array<T>(unsigned int n): _size(n)
		{
			if (n != 0)
				this->array = new T[n];
			else
				array = NULL;
		}

		Array<T>(Array const & other )
		{
			this->_size = other._size;
			this->array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				this->array[i] = other.array[i];
		}

		virtual ~Array<T>(void)
		{
			if (this->array)
				delete [] this->array;
		}

		Array & operator=(Array const & other)
		{
			this->_size = other._size;
			if (this->array)
				delete [] this->array;
			this->array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				this->array[i] = other.array[i];
			return *this;
		}

		class OutArrayIndex: public std::exception{
			public:
				virtual const char* what() const throw()
				{ return ("\e[0;31mERROR: You are out of the Array index\e[0m");} };

		unsigned int	size() const
		{
			return (_size);
		}

		T & operator[](unsigned int index)
		{
			if (index >= size() || index < 0)
				throw OutArrayIndex();
			return (this->array[index]);
			exit(0);
		}
};

#endif

