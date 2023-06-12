/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:38 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/12 11:53:47 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
	: _type("...")
{
	_printPrefix() << "Default constructor called" << std::endl;
}

AMateria::AMateria( const AMateria & src )
	: _type("...")
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	_printPrefix() << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	_printPrefix() << "Copy assignment operator called.";
	if ( this != &rhs )
		this->_type = rhs._type;
	else
		std::cout << " this == rhs";
	std::cout << std::endl;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream	&AMateria::_printPrefix(void) const
{
	return _printPrefix("AMateria", "");
}

std::ostream	&AMateria::_printPrefix(const std::string &context, const std::string &type) const
{
	std::string	t = type;

	if (t.empty())
		t = "...";
	return std::cout << std::left << std::setw(20) << "[" + context + "]" + "(" + t + ") ";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */