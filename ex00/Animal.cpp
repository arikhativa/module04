/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:21:55 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 15:23:56 by yrabby           ###   ########.fr       */
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

Animal::Animal(const std::string &type) : type(type)
{
	_printPrefix() << "Constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : type(src.type)
{
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
