/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_users.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:01:30 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/13 12:58:09 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook.h"

std::string formatColumn(const std::string text)
{
    std::string formatted = text;
    if (formatted.length() > 10) {
        formatted = formatted.substr(0, 9) + '.';
    }
    
    return std::string(10 - formatted.length(), ' ') + formatted;
}

std::string trim(const std::string str)
{
    int first = str.find_first_not_of(" \t\n\r\f\v");
    int last = str.find_last_not_of(" \t\n\r\f\v");

    if (first == -1)
    {
        return "";  
    }
    
    return str.substr(first, (last - first + 1));
}

void get_information_user(std::string *first_name, std::string *last_name, 
                                std::string *nickname, std::string *phone_number,
                                std::string *darkest_secret)
{
    do {
        std::cout << "Enter first name: ";
        std::cout << "\033[34m" ;
        std::getline(std::cin, *first_name);
        std::cout << "\033[0m";
    } while (trim(*first_name).empty());

    do {
        std::cout << "Enter last name: ";
        std::cout << "\033[34m" ;
        std::getline(std::cin, *last_name);
        std::cout << "\033[0m";
    } while (trim(*last_name).empty());

    do {
        std::cout << "Enter nickname: ";
        std::cout << "\033[34m" ;
        std::getline(std::cin, *nickname);
        std::cout << "\033[0m";
    } while (trim(*nickname).empty());

    do {
        std::cout << "Enter phone number: ";
        std::cout << "\033[34m" ;
        std::getline(std::cin, *phone_number);
        std::cout << "\033[0m";
    } while (trim(*phone_number).empty());

    do {
        std::cout << "Enter darkest secret: ";
        std::cout << "\033[34m" ;
        std::getline(std::cin, *darkest_secret);
        std::cout << "\033[0m";
    } while (trim(*darkest_secret).empty());
}

void	error_msg(std::string s)
{
	std::cout << "\033[31m";
    std::cout << s << std::endl;
    std::cout << "\033[0m";
}

void	valide_msg(std::string s)
{
	std::cout << "\033[32m";
    std::cout << s << std::endl;
    std::cout << "\033[0m";
}

