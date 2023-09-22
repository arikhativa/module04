/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:55:57 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:05:14 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
	: AMateria("cure")
{
	// printInfo("Cure") << "Constructor called" << std::endl;
}

Cure::Cure(const Cure &src)
	: AMateria("cure")
{
	(void)src;
	// printInfo("Cure") << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	// printInfo("Cure") << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &Cure::operator=(Cure const &rhs)
{
	// printInfo("Cure") << "Copy assignment operator called." << std::endl;
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	return new Cure();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
