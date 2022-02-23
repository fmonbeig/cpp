/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:46:35 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/23 17:54:31 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string.h>

struct Data
{
	int var1;
	int var2;

};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
