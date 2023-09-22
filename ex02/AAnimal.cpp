/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:21:55 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/12 09:28:59 by yrabby           ###   ########.fr       */
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

AAnimal::AAnimal( const AAnimal & src )
{
	*this = src;
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

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	_printPrefix() << "Copy assignment operator called.";
	if ( this != &rhs )
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

std::ostream	&AAnimal::_printPrefix(void) const
{
	return _printPrefix("AAnimal", type);
}

std::ostream	&AAnimal::_printPrefix(const std::string &context, const std::string &type) const
{
	std::string	t = type;

	if (t.empty())
		t = "...";
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + t + ") ";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	&AAnimal::getType(void) const
{
	return type;
}

/* ************************************************************************** */
