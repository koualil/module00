/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:40:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/13 11:59:04 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> 

// do with string

int main(int argc, char const *argv[])
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
		int count = 1;
		while (count < argc)
		{
			std::string my_string = argv[count];
            std::transform(my_string.begin(), my_string.end(), my_string.begin(), ::toupper);
			std::cout << my_string;
			count++;
		}
		std::cout << std::endl;
    }
    return 0;
}