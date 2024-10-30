/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:53:47 by eperperi          #+#    #+#             */
/*   Updated: 2024/10/30 15:24:34 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

void Contact::fill_contact()
{
	first_name = empty_check("Please enter your first name : ", false);
	last_name = empty_check("Please enter your last name :", false);
	nick_name = empty_check("Please enter your nickname :", false);
	phone_number = empty_check("Please enter your phone number :", true);
	dark_secret = empty_check("Please enter your darkest secret :", false);
}

std::string Contact::empty_check(std::string field, bool number)
{
	unsigned long i = 0;
	std::string line;
	bool flag = true;

	std::cout << field << " ";
	std::getline(std::cin, line);
	if (std::cin.fail())
		exit (1);
	while (flag)
	{
		while (i < line.length() && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'))
			i++;
		if (i == line.length())
		{
			std::cout << field << std::endl;
			std::getline(std::cin, line);
			flag = true;
		}
		else
			flag = false;
	}
	if (number)
	{
		number_check(line.substr(i), field);
	}
	return line;
}

std::string Contact::number_check(std::string line, std::string field)
{
	bool flag = true;
	
	while (flag)
	{
		for (char n : line)
		{
			if (!isdigit(n))
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return line;
		}
		else
		{
			flag = true;
			std::cout << field << std::endl;
			std::getline(std::cin, line);
		}
	}
	return NULL;
}

void Contact::printname()
{
	std::cout << first_name << " " << last_name << std::endl << std::endl;
}

void Contact::print_search()
{
	check_length(first_name);
	check_length(last_name);
	check_length(nick_name);
}

void Contact::check_length(std::string string)
{
	if (string.length() < 10)
	{	
		for (int x = 10 - string.length(); x > 0; x--)
			std::cout << " ";
		std::cout << string << "|";
	}
	else
	{
		std::string temp = string.substr(0, 10);
		std::cout << temp << "|";
	}
	
}

void Contact::print_selected()
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name << std::endl;
	std::cout << "Nickname : " << nick_name << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest secret : " << dark_secret << std::endl;
}