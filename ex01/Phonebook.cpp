/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:01:33 by eperperi          #+#    #+#             */
/*   Updated: 2024/10/30 16:23:23 by eperperi         ###   ########.fr       */
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
	std::cout << std::endl << "Added contact : ";
	contacts[*index].printname();
	std::cout << *index << " " << *count << std::endl;
	(*index)++;
}

void Phonebook::search_contacts(int contacts_count, int contact_index)
{
	bool flag = true;
	(void)contact_index;
	if (contacts_count == 0)
	{
		std::cout << "There are no contacts" << std::endl << std::endl << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < contacts_count; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		contacts[i].print_search();
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	while (flag)
	{
		std::cout << std::endl << std::endl << std::endl << "Please select an index : ";
		std::string input;
		std::getline(std::cin, input);
		int number = std::stoi(input);
		if (number > contacts_count || number < 1)
		{
			std::cout << "There is no registration with that index" << std::endl << std::endl;
			flag = true;
		}
		else
		{
			flag = false;
			contacts[number - 1].print_selected();
		}
	}
}
	