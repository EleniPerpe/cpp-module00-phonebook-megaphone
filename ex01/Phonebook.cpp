/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:01:33 by eperperi          #+#    #+#             */
/*   Updated: 2024/10/31 11:14:18 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

void Phonebook::add_contact(int *count, int *index)
{
	if (*index == 8)
		*index = 0;
	contacts[*index].fill_contact();
	if ((*count) < 8)
		(*count)++;
	std::cout << std::endl << BBLUE << "Added contact : ";
	contacts[*index].printname();
	(*index)++;
}

void Phonebook::search_contacts(int contacts_count, int contact_index)
{
	bool flag = true;
	(void)contact_index;
	std::cout << std:: endl;
	if (contacts_count == 0)
	{
		std::cout << BRED << "!! THERE ARE NO CONTACTS !!" << RS << std::endl << std::endl << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     " << BYELLOW << "Index" << RS << "|" << BYELLOW << "First Name" << RS "|" 
		<< BYELLOW <<" Last Name" << RS "|" << BYELLOW << "  Nickname" << RS "|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < contacts_count; i++)
	{
		std::cout << "|         " << ORANGE << i + 1 << RS << "|";
		contacts[i].print_search();
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	while (flag)
	{
		std::cout << std::endl << std::endl << std::endl << YELLOW << "    Please select an index : ";
		std::string input;
		std::getline(std::cin, input);
		std::cout << std::endl;
		bool check = check_digit(input);
		if (!check)
		{
			std::cout << std::endl << BRED << "!! There is no registration with that index !!" << std::endl << std::endl;
			flag = true;		
		}
		else
		{
			int number = std::stoi(input);
			if (number > contacts_count || number < 1)
			{
				std::cout << std::endl << BRED << "!! There is no registration with that index !!" << std::endl << std::endl;
				flag = true;
			}
			else
			{
				flag = false;
				contacts[number - 1].print_selected();
			}
		}
	}
}

bool Phonebook::check_digit(std::string input)
{
		int i = 0;
		while (input[i] != '\0' && (input[i] == ' ' || input[i] == 't'))
			i++;
		if (input[i] == '\0')
			return false;
		while(isdigit(input[i]))
			i++;
		if (input[i] != '\0')
			return false;
	return true;
}