/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:38 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:05:00 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
	: type("default")
{
	// printInfo("AMateria", type) << "Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
	: type("default")
{
	(void)src;
	// printInfo("AMateria", type) << "Copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
	: type(type)
{
	// printInfo("AMateria", type) << "Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	// printInfo("AMateria", type) << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &AMateria::operator=(AMateria const &rhs)
{
	// printInfo("AMateria", type) << "Copy assignment operator called." << std::endl;
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
// 	// printInfo("AMateria", type) << "use() called" << std::endl;
// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AMateria::getType(void) const
{
	return type;
}

/* ************************************************************************** */
