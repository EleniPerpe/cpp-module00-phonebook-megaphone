/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:44:07 by eperperi          #+#    #+#             */
/*   Updated: 2024/10/31 10:33:16 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"


int main(void)
{
	Phonebook phonebook;
	std::string contact;
	int contacts_count = 0;
	int contact_index = 0;

	while(1)
	{
		std::cout << std::endl << BYELLOW << "Please make one of the above choices: " << GREEN << std::endl 
			<< std::endl << "\u2022  " << "ADD" << std::endl << "\u2022  " << "SEARCH" << std::endl 
			<< "\u2022  " << "EXIT" << WHITE << std::endl << std::endl;
		std::getline(std::cin, contact);
		if (std::cin.fail())
			return 1;
		if (contact.compare("ADD") == 0 || contact.compare("add") == 0)
			phonebook.add_contact(&contacts_count, &contact_index);
		else if (contact.compare("SEARCH") == 0 || contact.compare("search") == 0)
			phonebook.search_contacts(contacts_count, contact_index);
		else if (contact.compare("EXIT") == 0 || contact.compare("exit") == 0)
			return 0;
		else
			std::cout << std::endl << BRED << "!!   WRONG INPUT   !!" << std::endl << std::endl;
	}
}