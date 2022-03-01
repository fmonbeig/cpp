/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:53:57 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/01 13:07:39 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

#include <iostream>
#include <string.h>
#include <stdexcept>
#include <algorithm>
#include <iterator>

class ValueNotFound: public std::exception{
	public:
		virtual const char* what() const throw()
			{ return ("\e[0;31mERROR: Value not found\e[0m");} };

template<typename T>
int easyfind(T contain, int key)
{
	auto i = std::find(contain.begin(), contain.end(), key);
	if (i != contain.end())
		return *i;
	throw ValueNotFound();
}
#endif
