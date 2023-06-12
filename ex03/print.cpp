/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:17 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/12 16:50:09 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.hpp"

std::ostream	&title(const std::string &s)
{
	std::string tmp = " - " + s + " - ";
	return std::cout << std::left << std::setw(20) << tmp << std::endl;
}

std::ostream	&printInfo(const std::string &context, const std::string &type)
{
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + type + ") ";
}
