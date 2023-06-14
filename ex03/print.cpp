/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:17 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/14 11:13:54 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.hpp"

std::ostream	&title(const std::string &s)
{
	std::string tmp = " - " + s + " - ";
	return std::cout << std::endl<< std::left << tmp << std::endl << std::endl;
}

std::ostream	&printInfo(const std::string &context, const std::string &type)
{
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + type + ") ";
}
