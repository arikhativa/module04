/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:21:55 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 14:45:14 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Animal")
{
	_printPrefix() << "Default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const &rhs)
{
	_printPrefix() << "Copy assignment operator called.";
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	else
		std::cout << " this == rhs";
	std::cout << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound(void) const
{
	_printPrefix() << "...(Animal Noises)..." << std::endl;
}

std::ostream &Animal::_printPrefix(void) const
{
	return _printPrefix("Animal", type);
}

std::ostream &Animal::_printPrefix(const std::string &context, const std::string &a_type) const
{
	std::string t = a_type;

	if (t.empty())
		t = "...";
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + t + ") ";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &Animal::getType(void) const
{
	return type;
}

/* ************************************************************************** */
