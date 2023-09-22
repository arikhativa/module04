#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: Animal("Dog")
{
	_printPrefix() << "Default constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
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

Dog &Dog::operator=(Dog const &rhs)
{
	_printPrefix() << "Copy assignment operator called." << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream &Dog::_printPrefix(void) const
{
	return Animal::_printPrefix("Dog", type);
}

void Dog::makeSound(void) const
{
	_printPrefix() << "Dog is Barking!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
