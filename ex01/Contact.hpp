/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:16:29 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/12 18:08:38 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  Contact_HPP
#define Contact_HPP

#include <string>
#include <iostream>
class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
public:
    Contact();
    void set_contact(std::string first_name, std::string last_name, 
    std::string nickname, std::string phone_number, std::string darkest_secret);
    Contact get_contact();
    std::string formatColumn(const std::string text);
    
    void    show_contact_4(int i);
    void    show_contact_all(int i);
    ~Contact();
};

#endif
