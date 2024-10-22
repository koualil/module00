/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:14:41 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/12 21:40:26 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    current_index = 0;
	contact_full = false;
}

void	PhoneBook::add(Contact c)
{
	contact[current_index] = c;
	current_index = (current_index + 1) % MAX_CONTACT;
	if (current_index == 0)
		contact_full = true;
	
}
int	PhoneBook::search(int n)
{
	
	if (contact_full)
		current_index = MAX_CONTACT;
	if (n >= 0 && n < current_index)
		return n;
	return -1;	
}

void	PhoneBook::show_PhoneBook()
{
	int index = current_index;
	if (contact_full == true)
		index = MAX_CONTACT;
    std::cout << std::endl; 
	std::cout << "   index|" << "first name|" << " last name|" << " nick name|" << std::endl;
	for (int i = 0;i < index; i++)
		contact[i].show_contact_4(i);
    std::cout << std::endl; 
}

void	PhoneBook::show_all_info_contact(int i)
{
		contact[i].show_contact_all(i);
}

int     PhoneBook::get_curretnt_index()
{
	return (current_index);
}