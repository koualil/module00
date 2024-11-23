/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:49:54 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/23 22:16:33 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.h"

int main(int argc, char const *argv[])
{
	(void) argv;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::string choice_cmd;
	std::string  nb_choose;
	
	Contact c;
	PhoneBook ph;
	
	if (argc != 1)
		return 1;
	while(1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
		std::cout << "\033[32m" ;
		std::getline(std::cin, choice_cmd);
		choice_cmd = trim(choice_cmd);
		std::cout << "\033[0m";
		if (std::cin.eof())
			break;
		if (choice_cmd == "ADD" || choice_cmd == "add")
		{

			get_information_user(&first_name, &last_name, &nickname, &phone_number, &darkest_secret);
			c.set_contact(first_name, last_name, nickname, 
							phone_number, darkest_secret);
			ph.add(c);
			valide_msg("Contact added successfully");
		}
		else if (choice_cmd == "SEARCH" || choice_cmd == "search")
		{
			
			ph.show_PhoneBook();
			if (ph.get_curretnt_index() != 0)
			{
				while (true)
				{
					do {
						std::cout << "\033[34m";
						std::cout << "Please choose a contact by entering a number between 0 and 7 : ";
						std::getline(std::cin, nb_choose);
						std::cout << "\033[0m";
						if (std::cin.eof())
							return 0;
					} while (nb_choose.empty());
					if (check_number_is_digit(nb_choose))
					{
						int nb_choose_int = std::atoi(nb_choose.c_str());
						if (ph.search(nb_choose_int) != -1)
						{
							ph.show_all_info_contact(nb_choose_int);
							break;
						}
						else
							error_msg("invalid number choose!");
					}
					else if (nb_choose != "")
						error_msg("out of range 0-7");
				}
			}
				
		}
		
		else if (choice_cmd == "EXIT" || choice_cmd == "exit")
		{
			break;
		}
		else  if (choice_cmd != "")
			error_msg("wrong command!");
	}

	return 0;
}
