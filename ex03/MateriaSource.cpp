#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	// printInfo("MateriaSource") << "Constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	*this = src;
	// printInfo("MateriaSource") << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	// printInfo("MateriaSource") << "Destructor called" << std::endl;
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

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	// printInfo("MateriaSource") << "Copy assignment operator called.";
	if ( this != &rhs )
	{
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

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cerr << "Inventory is full" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _INVENTORY_SIZE; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return _inventory[i]->clone();
	}
	std::cerr << "Can't find: " + type << std::endl;
	return NULL;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */