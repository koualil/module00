/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:40:19 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/12 20:23:55 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

void	Contact::set_contact(std::string first_name, std::string last_name, 
    std::string nickname, std::string phone_number, std::string darkest_secret)
{
       this->first_name = first_name; 
	   this->last_name = last_name;
       this->nickname = nickname;
       this->phone_number = phone_number;
       this->darkest_secret = darkest_secret;
}

Contact Contact::get_contact()
{
    return *this;
}

std::string Contact::formatColumn(const std::string text)
{
    std::string formatted = text;
    if (formatted.length() > 10) {
        formatted = formatted.substr(0, 9) + '.';
    }
    
    return std::string(10 - formatted.length(), ' ') + formatted;
}

void	Contact::show_contact_4(int index)
{
	std::cout  << "       "<< index << "|" ;
	std::cout << "\033[33m" << formatColumn(first_name) << "\033[0m" << "|" ;
	std::cout << "\033[35m" << formatColumn(last_name) << "\033[0m" << "|" ;
	std::cout << "\033[36m" << formatColumn(nickname) << "\033[0m" << "|" << std::endl;  
}

void	Contact::show_contact_all(int index)
{
	
	std::cout  << "index : " << "\033[36m" << index << "\033[0m" << std::endl ;
	std::cout  << "first name : " << "\033[36m" << first_name << "\033[0m" << std::endl ;
	std::cout  << "last name : " << "\033[36m" << last_name << "\033[0m" << std::endl ;
	std::cout  << "nickname : " << "\033[36m" << nickname << "\033[0m" << std::endl ;
	std::cout  << "phone number : " << "\033[36m" << phone_number << "\033[0m" << std::endl ;
	std::cout  << "darkest secret : " << "\033[36m" << darkest_secret << "\033[0m" << std::endl ;
}

Contact::~Contact()
{
    
}
