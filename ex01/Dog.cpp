#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: Animal("Dog"),
	  _brain(new Brain())
{
	_printPrefix() << "Default constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
	: Animal(src),
	  _brain(new Brain(*src._brain))
{
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	_printPrefix() << "Copy assignment operator called." << std::endl;
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
