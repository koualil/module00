/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:40:19 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/09 13:57:59 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
Contact::Contact()
{
    
}

Contact::Contact(std::string first_name, std::string last_name, 
    std::string nickname, std::string phone_number, std::string darkest_secret)
{
       this->first_name = first_name; 
       this->last_name = last_name;
       this->nickname = nickname;
       this->phone_number = phone_number;
       this->darkest_secret = darkest_secret;
}

void Contact::Show()
{
    std::cout << this->first_name;
}

