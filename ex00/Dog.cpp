#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: Animal()
{
	_type = "Dog";
	_printPrefix() << "Default constructor called" << std::endl;
}

Dog::Dog( const Dog & src )
	: Animal(src)
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	_printPrefix() << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	_printPrefix() << "Copy assignment operator called.";
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		std::cout << " rhs: ";
		_printPrefix();
	}
	else
		std::cout << " this == rhs";
	std::cout << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream	&Dog::_printPrefix(void) const
{
	return Animal::_printPrefix("Dog", _type);
}

void	Dog::makeSound(void) const
{
	_printPrefix() << "Dog is Barking!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
