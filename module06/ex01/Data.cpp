/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:46:16 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/23 18:01:00 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t point;

	point = reinterpret_cast<uintptr_t>(ptr);
	return (point);
}

Data* deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}
