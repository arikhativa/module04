/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:21:55 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 15:59:30 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : type("AAnimal")
{
	_printPrefix() << "Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : type(type)
{
	_printPrefix() << "Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : type(src.type)
{
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	_printPrefix() << "Copy assignment operator called." << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream &AAnimal::_printPrefix(void) const
{
	return _printPrefix("AAnimal", type);
}

std::ostream &AAnimal::_printPrefix(const std::string &context, const std::string &a_type) const
{
	std::string t = a_type;

	if (t.empty())
		t = "...";
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + t + ") ";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &AAnimal::getType(void) const
{
	return type;
}

/* ************************************************************************** */
