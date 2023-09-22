#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: Animal("Cat")
{
	_printPrefix() << "Default constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
	: Animal(src)
{
	*this = src;
	_printPrefix() << "Copy constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	_printPrefix() << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs)
{
	_printPrefix() << "Copy assignment operator called." << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream &Cat::_printPrefix(void) const
{
	return Animal::_printPrefix("Cat", type);
}

void Cat::makeSound(void) const
{
	_printPrefix() << "Cat is Meowing!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
