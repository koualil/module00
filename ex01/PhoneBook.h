/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:12:35 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/12 18:05:53 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_H
#define PhoneBook_H

#include "PhoneBook.hpp"
#include "Contact.hpp"

void get_information_user(std::string *first_name, std::string *last_name, 
                                std::string *nickname, std::string *phone_number,
                                std::string *darkest_secret);
std::string formatColumn(const std::string text);
void	error_msg(std::string s);
void	valide_msg(std::string s);
#endif 