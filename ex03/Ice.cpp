/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:55:52 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:05:23 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
	: AMateria("ice")
{
	// printInfo("Ice") << "Constructor called" << std::endl;
}

Ice::Ice(const Ice &src)
	: AMateria("ice")
{
	(void)src;
	// printInfo("Ice") << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	// printInfo("Ice") << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &Ice::operator=(Ice const &rhs)
{
	// printInfo("Ice") << "Copy assignment operator called." << std::endl;
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}

AMateria *Ice::clone(void) const
{
	return new Ice();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
