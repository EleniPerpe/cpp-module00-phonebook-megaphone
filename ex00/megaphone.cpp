/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:38:36 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/05 15:50:43 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
        {
			for (int j = 0; argv[i][j] != '\0'; j++)
            {
                if (isalpha(argv[i][j]))
                    std::cout << static_cast<char>(toupper(argv[i][j]));
                else
                    std::cout << argv[i][j];
            }
			if (i < argc - 1)
				std::cout << " ";
        }
    }
    std::cout << "\n";
    return (0);
}
