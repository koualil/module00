/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:16:29 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/09 13:58:19 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    Contact(std::string first_name, std::string last_name, 
    std::string nickname, std::string phone_number, std::string darkest_secret);
    void Show();
    // ~Contact();
};

