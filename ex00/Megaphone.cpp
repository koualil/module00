/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:40:28 by mkoualil          #+#    #+#             */
/*   Updated: 2024/10/07 19:26:33 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
		int count = 1;
		while (count < argc)
		{
			int i = 0;
			while (argv[count][i] != '\0')
			{
				std::cout << (char)toupper(argv[count][i]);
				i++;
			}
			count++;
		}
		std::cout << std::endl;
    }
    return 0;
}