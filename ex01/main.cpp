/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:17:25 by christine         #+#    #+#             */
/*   Updated: 2023/11/06 19:20:37 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string str;
	while (1 && !std::cin.eof())
	{

		std::cout << "╔═══════════════════════════════════════════════════════════╗" << std::endl;
		std::cout << "              - \033[;1;4mWelcome To Your PhoneBook\033[0m ☎️ -             " << std::endl;
		std::cout << "       Make your choice : ADD ➕, SEARCH 🔍 or EXIT 🚪" << std::endl;
		std::cout << "╚═══════════════════════════════════════════════════════════╝" << std::endl;
		std::getline(std::cin, str);
		str = toupperString(str);
		if (str == "EXIT" || str == "EXIT 🚪")
			break;
		else if (str == "ADD" || str == "ADD ➕")
			phoneBook.add();
		else if (str == "SEARCH" || str == "SEARCH 🔍")
			phoneBook.search();
		else
			std::cout << "\n\033[31;1;4mPLEASE WRITE CORRECTLY, TRY AGAIN\033[0m" << std::endl;
	}
	return (0);
}
