/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:09:15 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:07:38 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string &name)
	: _name(name)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	// printInfo("Character", _name) << "Constructor called" << std::endl;
}

Character::Character(const Character &src)
	: _name(src._name)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	*this = src;
	// printInfo("Character", _name) << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	// printInfo("Character", _name) << "Destructor called" << std::endl;
	for (int i = 0; i < _INVENTORY_SIZE; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &rhs)
{
	// printInfo("Character", _name) << "Copy assignment operator called.";
	if (this != &rhs)
	{
		std::cout << " rhs: " << rhs._name << std::endl;
		_name = rhs._name;
		for (int i = 0; i < _INVENTORY_SIZE; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	else
		std::cout << " this == rhs" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Character::equip(AMateria *m)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}
	}
	std::cerr << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < _INVENTORY_SIZE)
	{
		if (_inventory[idx])
		{
			_inventory[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx < _INVENTORY_SIZE) && (_inventory[idx]))
		_inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Character::getName() const
{
	return _name;
}

/* ************************************************************************** */
