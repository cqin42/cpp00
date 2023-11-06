/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupperString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:57:58 by cqin              #+#    #+#             */
/*   Updated: 2023/11/06 19:17:54 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string toupperString(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
