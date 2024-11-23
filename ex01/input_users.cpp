/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_users.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:01:30 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/23 22:19:03 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook.h"

int check_number_is_digit(std::string num)
{
    unsigned long i = 0;
    while (i < num.length())
    {
        if (std::isdigit(num[i]) != 1)
            return 0;
        i++;
    }
    return 1;
    
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

void full_user_info(std::string *info, std::string msg)
{
    do {
        std::cout << msg;
        std::cout << "\033[34m" ;
        std::getline(std::cin, *info);
        if (std::cin.eof())
            std::exit(0);

            
        std::cout << "\033[0m";
    } while (trim(*info).empty());
}

void get_information_user(std::string *first_name, std::string *last_name, 
                                std::string *nickname, std::string *phone_number,
                                std::string *darkest_secret)
{
    full_user_info(first_name, "Enter first name: ");
    full_user_info(last_name, "Enter last name: ");
    full_user_info(nickname, "Enter nickname: ");
    full_user_info(phone_number, "Enter phone number: ");
    full_user_info(darkest_secret, "Enter darkest secret: ");
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

