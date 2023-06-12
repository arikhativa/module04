/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:38 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/12 13:30:28 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type)
	: _type(type)
{
	_printPrefix("AMateria", type) << "Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	_printPrefix("AMateria", _type) << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// TODO not sure about removeing the operator=()

/*
** --------------------------------- METHODS ----------------------------------
*/

// TODO maybe this will use something n the target
void AMateria::use(ICharacter& target)
{
	_printPrefix("AMateria", _type) << "use() called" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AMateria::getType(void) const
{
	return _type;
}



/* ************************************************************************** */