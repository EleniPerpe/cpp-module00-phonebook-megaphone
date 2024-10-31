/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:44:04 by eperperi          #+#    #+#             */
/*   Updated: 2024/10/31 10:22:35 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
#define CONTACT_HPP

#endif

# define BLACK "\e[0;30m"
#define RED "\e[1;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define BLUE "\e[0;34m"
# define MAGENTA "\e[0;35m"
# define CYAN "\e[0;36m"
# define WHITE "\e[0;37m"
# define ORANGE "\e[0;38;5;208m"
# define RS "\x1B[0m"
# define BBLACK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGREEN "\e[1;32m"
# define BYELLOW "\e[1;33m"
# define BBLUE "\e[1;34m"
# define BMAGENTA "\e[1;35m"
# define BCYAN "\e[1;36m"
# define BWHITE "\e[1;37m"
# define BORANGE "\e[1;38;5;208m"

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