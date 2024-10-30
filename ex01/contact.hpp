/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:44:04 by eperperi          #+#    #+#             */
/*   Updated: 2024/10/30 15:21:51 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
#define CONTACT_HPP

#endif

class Contact
{
	private:
		std::string first_name;	
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	dark_secret;

		std::string empty_check(std::string field, bool number);
		std::string number_check(std::string line, std::string field);
		void check_length(std::string string);
	public:
		void fill_contact();
		void printname();
		void print_search();
		void print_selected();
};