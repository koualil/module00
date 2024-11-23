/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:12:35 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/23 22:09:22 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_H
#define PhoneBook_H

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <ctype.h>
void get_information_user(std::string *first_name, std::string *last_name, 
                                std::string *nickname, std::string *phone_number,
                                std::string *darkest_secret);
int check_number_is_digit(std::string num);
void	error_msg(std::string s);
void	valide_msg(std::string s);
std::string trim(const std::string str);

#endif 