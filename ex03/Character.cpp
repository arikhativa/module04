#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string &name)
	: _name(name)
{
	_printPrefix("Character", _name) << "Default constructor called" << std::endl;
}

Character::Character( const Character & src )
{
	_printPrefix("Character") << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	_printPrefix("Character") << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	_printPrefix("Character") << "Copy assignment operator called.";
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

std::ostream	&Cure::_printPrefix(void) const
{
	return AMateria::_printPrefix("Cure", _type);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */