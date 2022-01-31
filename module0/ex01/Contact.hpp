/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:53:45 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/31 14:36:06 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void	set_information();
		void	get_information() const;
		void	get_coordonate_of_one_contact() const;

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_darkest_secret;
		std::string	_phone;

};

#endif
