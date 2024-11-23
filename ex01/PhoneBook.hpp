/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:28:46 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/21 13:13:42 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"
#define MAX_CONTACT 8
     
class PhoneBook
{     
    private: 
        Contact contact[MAX_CONTACT];
        int current_index;
        int count;
    public:
        
        PhoneBook();
        void    add(Contact c);
        void    show_PhoneBook();
        int	    search(int n);
        void	show_all_info_contact(int i);
        int     get_curretnt_index();

};
#endif