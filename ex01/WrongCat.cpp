/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:34:16 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 14:45:35 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
	: WrongAnimal()
{
	type = "WrongCat";
	_printPrefix() << "Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
	: WrongAnimal()
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	_printPrefix() << "Copy assignment operator called.";
	if (this != &rhs)
	{
		this->type = rhs.type;
		std::cout << " rhs: ";
		_printPrefix();
	}
	else
		std::cout << " this == rhs";
	std::cout << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream &WrongCat::_printPrefix(void) const
{
	return WrongAnimal::_printPrefix("WrongCat", type);
}

void WrongCat::makeSound(void) const
{
	_printPrefix() << "WrongCat is Meowing!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
