/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:40:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/11/23 21:49:19 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void iterate_string(std::string str)
{
    for (int i=0;i<str.length();i++)
        std::cout << (char)std::toupper(str[i]);
}

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
            iterate_string(my_string);
			count++;
		}
		std::cout << std::endl;
    }
    return 0;
}