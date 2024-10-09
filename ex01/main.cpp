/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:49:54 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/09 13:58:33 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main(int argc, char const *argv[])
{
    std::string first_name;
    std::string last_name;
    
    std::cout << "enter first name ";
    std::cin >> first_name;
    
    std::cout << "enter last name ";
    std::cin >> first_name;

    Contact user(first_name, last_name, last_name, last_name, last_name);
    user.Show();
    return 0;
}
