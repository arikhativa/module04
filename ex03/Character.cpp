/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:09:15 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:38:04 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::_copyMateria(AMateria *a[_INVENTORY_SIZE], const AMateria *const *b)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
	{
		if (a[i])
		{
			delete a[i];
			a[i] = NULL;
		}
		if (b[i])
			a[i] = b[i]->clone();
	}
}

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
}

Character::Character(const std::string &name)
	: _name(name)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src)
	: _name(src._name)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	Character::_copyMateria(_inventory, src._inventory);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
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
	if (this != &rhs)
	{
		_name = rhs._name;
		Character::_copyMateria(_inventory, rhs._inventory);
	}
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
			return;
		}
	}
	std::cerr << "Nothing to unequip in index: " << idx << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx < _INVENTORY_SIZE) && (_inventory[idx]))
		_inventory[idx]->use(target);
	else
		std::cerr << "Nothing to use in index: " << idx << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Character::getName() const
{
	return _name;
}

/* ************************************************************************** */
