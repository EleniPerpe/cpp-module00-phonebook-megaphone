/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:44:02 by eperperi          #+#    #+#             */
/*   Updated: 2024/10/30 16:03:00 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class Phonebook
{
	private:
		Contact contacts[8];

	public:
		void add_contact(int *count, int *index);
		void search_contacts(int contacts_count, int contact_index);
};

#endif
