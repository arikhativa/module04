/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:38 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/13 12:03:26 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
	: _type("default")
{
	printInfo("AMateria", _type) << "Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
	: _type("default")
{
	(void)src;
	printInfo("AMateria", _type) << "Copy constructor called" << std::endl;
}


AMateria::AMateria(std::string const & type)
	: _type(type)
{
	printInfo("AMateria", type) << "Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	printInfo("AMateria", _type) << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria	&AMateria::operator=( AMateria const & rhs )
{
	printInfo("AMateria", _type) << "Copy assignment operator called." << std::endl;
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// TODO maybe this will use something n the target
// void AMateria::use(ICharacter& target)
// {
// 	(void)target;
// 	printInfo("AMateria", _type) << "use() called" << std::endl;
// }


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AMateria::getType(void) const
{
	return _type;
}



/* ************************************************************************** */