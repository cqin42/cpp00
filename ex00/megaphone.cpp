/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:53:00 by cqin              #+#    #+#             */
/*   Updated: 2023/11/06 16:00:27 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	char	*line;

	if (argc > 1)
	{
		std::cout << "\033[1;4;30mYOUR INPUT\033[0m → ";
		for (int j = 1; j < argc; j++)
		{
			std::cout << (char *)argv[j] << " ";
		}
		std::cout << "\n\033[1;4;30mBECOME\033[0m → ";
		for (int i = 1; i < argc; i++)
		{
			line = argv[i];
			for (int j = 0; line[j]; j++)
			{
				std::cout << (char)toupper(line[j]);
			}
			std::cout << " ";
		}
		std::cout << "" << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
