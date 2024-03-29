/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:24 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:08:09 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <string>
#include <iomanip>

std::ostream &printInfo(const std::string &context, const std::string &type = "...");
std::ostream &title(const std::string &s);

#endif
