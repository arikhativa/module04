/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:09:15 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/12 14:09:15 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string &name)
	: _name(name)
{
	for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
	printInfo("Character", _name) << "Constructor called" << std::endl;
}

Character::Character( const Character & src )
{
	*this = src;
	printInfo("Character", _name) << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	printInfo("Character", _name) << "Destructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	printInfo("Character", _name) << "Copy assignment operator called.";
	if ( this != &rhs )
	{
		std::cout << " rhs: ";
		printInfo("Character", rhs._name);
		_name = rhs._name;
		for (int i = 0; i < _inventorySize; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = rhs._inventory[i]->clone();
			}
			else
				_inventory[i] = NULL;
		}
	}
	else
		std::cout << " this == rhs";
	std::cout << std::endl;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Character::equip(AMateria* m)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m->clone();
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx > 0 || idx < _inventorySize)
	{
		if (_inventory[idx])
		{
			delete _inventory[idx];
			_inventory[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 0 || idx < _inventorySize)
	{
		if (_inventory[idx])
			_inventory[idx]->use(target);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */