/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:17:16 by christine         #+#    #+#             */
/*   Updated: 2023/11/06 17:25:46 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::print_space(std::string str)
{
	if (str.length() < 10)
	{
		for (int j = 0; j < (int)(10 - str.length()); j++)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		for (int j = 0; j < 9; j++)
			std::cout << str[j];
		std::cout << ".";
	}
	std::cout << "|";
}

void PhoneBook::search()
{
	std::string str;

	while (1 && !std::cin.eof())
	{
		if (this->index == 0)
		{
			std::cout << "\033[31;1;4mNO DATA , ADD SOME CONTACTS BEFORE TO SEARCH ;)\033[0m" << std::endl;
			break;
		}
		std::cout << "\033[0;1m--------------------------------------------- \033[0m" << std::endl;
		std::cout << "|     \033[0;1mindex|\033[0;1mfirst name| \033[0;1mlast name|  \033[0;1mnickname|\033[0m" << std::endl;
		std::cout << "\033[0;1m--------------------------------------------- \033[0m" << std::endl;

		for (int i = 0; i < 8; i++)
		{
			if (this->contact[i].get_firstname().empty())
				break;
			std::cout << "|         ";
			std::cout << i;
			std::cout << "|";
			print_space(this->contact[i].get_firstname());
			print_space(this->contact[i].get_lastname());
			print_space(this->contact[i].get_nickname());
			std::cout << "" << std::endl;
		}
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "Choice an index :" << std::endl;
		std::cout << "\033[35;1m╚> ";
		getline(std::cin, str);
		std::cout << "\033[0m";
		int nb = atoi(str.c_str());

		if (!isdigit(str[0]) || nb >= 8 || str.length() > 1 || this->contact[nb].get_firstname().empty())
			std::cout << "\n\033[31;1;4mTHIS INDEX " << str << " DOES NOT EXIST.\033[0m" << std::endl;
		else if (str != "" && nb < 8 && nb >= 0 && !this->contact[nb].get_firstname().empty())
		{
			std::cout << "YOU CHOOSEN " << nb << std::endl;
			std::cout << "❀ first name :";
			std::cout << this->contact[nb].get_firstname() << std::endl;
			std::cout << "❀ last name :";
			std::cout << this->contact[nb].get_lastname() << std::endl;
			std::cout << "❀ nickname :";
			std::cout << this->contact[nb].get_nickname() << std::endl;
			std::cout << "❀ phone number :";
			std::cout << this->contact[nb].get_phone_number() << std::endl;
			std::cout << "❀ darkest secret :";
			std::cout << this->contact[nb].get_darkest_secret() << std::endl;
			break;
		}
	}
}

void PhoneBook::add()
{
	std::string str;

	if (this->index > 7)
		this->index = 0;

	while (str == "" && !std::cin.eof())
	{
		std::cout << "Your first name ?" << std::endl;
		std::cout << "\033[35;1m╚> ";
		getline(std::cin, str);
		std::cout << "\033[0m";
		this->contact[this->index].set_firstname(str);
	}

	str = "";
	while (str == "" && !std::cin.eof())
	{
		std::cout << "Your last name ?" << std::endl;
		std::cout << "\033[35;1m╚> ";
		getline(std::cin, str);
		std::cout << "\033[0m";
		this->contact[this->index].set_lastname(str);
	}

	str = "";
	while (str == "" && !std::cin.eof())
	{
		std::cout << "Your nickname ?" << std::endl;
		std::cout << "\033[35;1m╚> ";
		getline(std::cin, str);
		std::cout << "\033[0m";
		this->contact[this->index].set_nickname(str);
	}

	str = "";
	while (str == "" && !std::cin.eof())
	{
		std::cout << "Your phone_number ?" << std::endl;
		std::cout << "\033[35;1m╚> ";
		getline(std::cin, str);
		std::cout << "\033[0m";
		this->contact[this->index].set_phone_number(str);
	}

	str = "";
	while (str == "" && !std::cin.eof())
	{
		std::cout << "Your darkest secret ?" << std::endl;
		std::cout << "\033[35;1m╚> ";
		getline(std::cin, str);
		std::cout << "\033[0m";
		this->contact[this->index].set_darkest_secret(str);
	}

	this->index++;
}
