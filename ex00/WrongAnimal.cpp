/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:34:00 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/11 17:38:16 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	_printPrefix() << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	_printPrefix() << "Copy assignment operator called.";
	if ( this != &rhs )
	{
		this->_type = rhs._type;
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

void	WrongAnimal::makeSound(void) const
{
	_printPrefix() << "...(WrongAnimal Noises)..." << std::endl;
}

std::ostream	&WrongAnimal::_printPrefix(void) const
{
	return _printPrefix("WrongAnimal", _type);
}

std::ostream	&WrongAnimal::_printPrefix(const std::string &context, const std::string &type) const
{
	std::string	t = type;

	if (t.empty())
		t = "...";
	return std::cout << std::left << std::setw(30) << "[" + context + "]" + "(" + t + ") ";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	&WrongAnimal::getType(void) const
{
	return _type;
}

/* ************************************************************************** */
