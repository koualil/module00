/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:14:41 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/16 18:34:26 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    current_index = 0;
	count = 0;
}

void	PhoneBook::add(Contact c)
{
	contact[current_index] = c;
	current_index = (current_index + 1) % MAX_CONTACT;
	if (count < MAX_CONTACT)
		count++;
}

int	PhoneBook::search(int n)
{
	
	if (n >= 0 && n < count)
		return n;
	return -1;	
}

void	PhoneBook::show_PhoneBook()
{

    std::cout << std::endl; 
	std::cout << "   index|" << "first name|" << " last name|" << " nick name|" << std::endl;
	for (int i = 0;i < count; i++)
		contact[i].show_contact_4(i);
    std::cout << std::endl; 
}

void	PhoneBook::show_all_info_contact(int i)
{
		contact[i].show_contact_all(i);
}

int     PhoneBook::get_curretnt_index()
{
	return (count);
}